cmake_minimum_required(VERSION 3.10)
project(ZenKitCAPI LANGUAGES CXX C VERSION 1.3.0)

set(CMAKE_CXX_STANDARD 20)

# Required for dependencies to compile properly.
if (NOT MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
endif ()

option(ZKC_ENABLE_ASAN "ZenKitCAPI: Enable sanitizers in debug builds." ON)

add_subdirectory(vendor/ZenKit)

list(APPEND _ZKC_SOURCES
        src/Boxes.cc
        src/CutsceneLibrary.cc
        src/DaedalusScript.cc
        src/DaedalusVm.cc
        src/daedalus/CameraInstance.cc
        src/daedalus/EffectBaseInstance.cc
        src/daedalus/FightAiInstance.cc
        src/daedalus/FocusInstance.cc
        src/daedalus/GuildValuesInstance.cc
        src/daedalus/InfoInstance.cc
        src/daedalus/ItemInstance.cc
        src/daedalus/ItemReactInstance.cc
        src/daedalus/MenuInstance.cc
        src/daedalus/MenuItemInstance.cc
        src/daedalus/MissionInstance.cc
        src/daedalus/MusicJingleInstance.cc
        src/daedalus/MusicSystemInstance.cc
        src/daedalus/MusicThemeInstance.cc
        src/daedalus/NpcInstance.cc
        src/daedalus/ParticleEffectEmitKeyInstance.cc
        src/daedalus/ParticleEffectInstance.cc
        src/daedalus/SoundEffectInstance.cc
        src/daedalus/SoundSystemInstance.cc
        src/daedalus/SpellInstance.cc
        src/daedalus/SvmInstance.cc
        src/Font.cc
        src/Material.cc
        src/Mesh.cc
        src/Model.cc
        src/ModelAnimation.cc
        src/ModelHierarchy.cc
        src/ModelMesh.cc
        src/ModelScript.cc
        src/MorphMesh.cc
        src/MultiResolutionMesh.cc
        src/Object.cc
        src/SaveGame.cc
        src/SoftSkinMesh.cc
        src/Stream.cc
        src/Texture.cc
        src/Logger.cc
        src/Vfs.cc
        src/vobs/Camera.cc
        src/vobs/Light.cc
        src/vobs/Misc.cc
        src/vobs/MovableObject.cc
        src/vobs/Sound.cc
        src/vobs/Trigger.cc
        src/vobs/VirtualObject.cc
        src/vobs/Zone.cc
        src/world/BspTree.cc
        src/world/WayNet.cc
        src/World.cc
)

include(support/BuildSupport.cmake)
bs_select_cflags(${ZKC_ENABLE_ASAN} _ZKC_COMPILE_FLAGS _ZKC_LINK_FLAGS)

if (EMSCRIPTEN)
    list(APPEND _ZKC_SOURCES src/Main.cc)
    list(APPEND _ZKC_COMPILE_FLAGS -fexceptions)
    list(APPEND _ZKC_LINK_FLAGS
            -sWASM=1
            -sMODULARIZE
            -sEXPORT_ES6=1
            -sEXPORT_KEEPALIVE=1
            -sSINGLE_FILE=1
            -sEXPORTED_FUNCTIONS=_malloc,_free
            -sEXPORTED_RUNTIME_METHODS=ccall,cwrap,addFunction,removeFunction,AsciiToString,setValue,getValue
            -sALLOW_MEMORY_GROWTH=1
            -sALLOW_TABLE_GROWTH=1
            -fexceptions
            --embind-emit-ts
    )
    add_executable(zenkitcapi)
    target_link_libraries(zenkitcapi PRIVATE embind)
else ()
    add_library(zenkitcapi SHARED)
endif ()

target_sources(zenkitcapi PRIVATE ${_ZKC_SOURCES})
target_include_directories(zenkitcapi PUBLIC include)
target_compile_options(zenkitcapi PRIVATE ${_ZKC_COMPILE_FLAGS})
target_compile_definitions(zenkitcapi PRIVATE _ZKC_DYN=1)
target_link_options(zenkitcapi PRIVATE ${_ZKC_LINK_FLAGS})
target_link_libraries(zenkitcapi PRIVATE zenkit)
set_target_properties(zenkitcapi PROPERTIES CXX_VISIBILITY_PRESET hidden VISIBILITY_INLINES_HIDDEN 1 DEBUG_POSTFIX "d" VERSION ${PROJECT_VERSION})

install(TARGETS zenkitcapi ARCHIVE LIBRARY RUNTIME)
install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/include/zenkit-capi" TYPE INCLUDE)
