cmake_minimum_required (VERSION 3.10)
project ("cc_mqtt5_cc_tools_qt_plugin")

# Build options:
option (OPT_WARN_AS_ERR "Treat warnings as errors" ON)
option (OPT_USE_CCACHE "Use ccache" OFF)
option (OPT_WITH_DEFAULT_SANITIZERS "Build with sanitizers" OFF)
option (OPT_INSTALL_DEFAULT_CONFIG "Install default plugin configuration" ON)

# Configuration variables:
# OPT_QT_MAJOR_VERSION - The major Qt version, defaults to 5
# OPT_CCACHE_EXECUTABLE - Custom ccache executable

######################################################################

if ("${OPT_QT_MAJOR_VERSION}" STREQUAL "")
    set(OPT_QT_MAJOR_VERSION 5)
endif()

if ("${CMAKE_CXX_STANDARD}" STREQUAL "")
    set(CMAKE_CXX_STANDARD 17)
endif()

if ("${CMAKE_CXX_STANDARD}" VERSION_LESS "17")
    message (FATAL_ERROR "Use C++17 or later (instead of C++${CMAKE_CXX_STANDARD}) to compile this project.")
endif()

find_package(LibComms REQUIRED)
find_package(cc_mqtt5 REQUIRED)
find_package(cc_tools_qt REQUIRED)
find_package(Qt${OPT_QT_MAJOR_VERSION} REQUIRED COMPONENTS Widgets Core)

set (CMAKE_AUTOMOC ON)
set (CMAKE_AUTOUIC ON)
set (CMAKE_AUTORCC ON)

set (extra_opts)
if (OPT_WARN_AS_ERR)
    list(APPEND extra_opts WARN_AS_ERR)
endif()

if (OPT_USE_CCACHE)
    list(APPEND extra_opts USE_CCACHE)
    if (NOT "${OPT_CCACHE_EXECUTABLE}" STREQUAL "")
        list(APPEND extra_opts CCACHE_EXECUTABLE "${OPT_CCACHE_EXECUTABLE}")
    endif()
endif()

if (OPT_WITH_DEFAULT_SANITIZERS)
    list(APPEND extra_opts DEFAULT_SANITIZERS)
endif()

include(${LibComms_DIR}/CC_Compile.cmake)
cc_compile(${extra_opts})
cc_msvc_force_warn_opt(/W4)

include(GNUInstallDirs)

set (INTERFACE_LIB_PREFIX "cc_tools_qt_plugin_cc_mqtt5")

######################################################################

function (cc_plugin_Message)
    set (name ${INTERFACE_LIB_PREFIX}_Message)
    set (src
        cc_tools_qt_plugin/Message/cc_mqtt5/Message.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Auth.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Connack.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Connect.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Disconnect.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Pingreq.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Pingresp.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Puback.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Pubcomp.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Publish.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Pubrec.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Pubrel.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Suback.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Subscribe.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Unsuback.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/message/Unsubscribe.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/factory/MsgFactory.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/frame/FrameTransportMessage.cpp
        cc_tools_qt_plugin/Message/cc_mqtt5/frame/Frame.cpp
    )

    add_library (${name} STATIC ${src})
    set_target_properties(${name} PROPERTIES POSITION_INDEPENDENT_CODE TRUE)
    target_link_libraries (${name} PUBLIC cc::cc_mqtt5 cc::comms cc::cc_tools_qt Qt${OPT_QT_MAJOR_VERSION}::Widgets Qt${OPT_QT_MAJOR_VERSION}::Core)
    target_include_directories (${name} PUBLIC ${PROJECT_SOURCE_DIR})
    target_compile_options(${name} PRIVATE
        $<$<CXX_COMPILER_ID:MSVC>:/bigobj /wd4127 /wd5054>
        $<$<CXX_COMPILER_ID:GNU>:-ftemplate-depth=2048 -fconstexpr-depth=4096 -Wno-unused-local-typedefs>
        $<$<CXX_COMPILER_ID:Clang>:-ftemplate-depth=2048 -fconstexpr-depth=4096 -fbracket-depth=2048 -Wno-unused-local-typedefs>
    )
endfunction()

######################################################################

function (cc_plugin protocol interface)
    string(TOLOWER "cc_tools_plugin_${protocol}" name)

    if (NOT "${name}" MATCHES ".*_protocol$")
        string(APPEND name "_protocol")
    endif ()

    set (meta_file "${CMAKE_CURRENT_SOURCE_DIR}/cc_tools_qt_plugin/cc_mqtt5/plugin/Plugin_${protocol}.json")
    set (stamp_file "${CMAKE_CURRENT_BINARY_DIR}/${protocol}_refresh_stamp.txt")

    if ((NOT EXISTS ${stamp_file}) OR (${meta_file} IS_NEWER_THAN ${stamp_file}))
        execute_process(
            COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_SOURCE_DIR}/cc_tools_qt_plugin/cc_mqtt5/plugin/Plugin_${protocol}.h)

        execute_process(
            COMMAND ${CMAKE_COMMAND} -E touch ${stamp_file})
    endif ()

    set (src
        cc_tools_qt_plugin/cc_mqtt5/plugin/Protocol_${protocol}.cpp
        cc_tools_qt_plugin/cc_mqtt5/plugin/Plugin_${protocol}.cpp
        cc_tools_qt_plugin/cc_mqtt5/plugin/Plugin_${protocol}.h
    )

    set(extra_link_opts)
    if ((NOT OPT_WITH_DEFAULT_SANITIZERS) AND
        ((CMAKE_COMPILER_IS_GNUCC) OR ("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang")))
        set(extra_link_opts "-Wl,--no-undefined")
    endif ()

    add_library (${name} MODULE ${src})
    target_link_libraries (${name} ${INTERFACE_LIB_PREFIX}_${interface} cc::cc_tools_qt Qt${OPT_QT_MAJOR_VERSION}::Core ${extra_link_opts})
    target_compile_options(${name} PRIVATE
        $<$<CXX_COMPILER_ID:MSVC>:/bigobj /wd4127 /wd5054>
        $<$<CXX_COMPILER_ID:GNU>:-ftemplate-depth=2048 -fconstexpr-depth=4096>
        $<$<CXX_COMPILER_ID:Clang>:-ftemplate-depth=2048 -fconstexpr-depth=4096 -fbracket-depth=2048>
    )
    target_include_directories (${name} PRIVATE ${PROJECT_SOURCE_DIR})

    install (
        TARGETS ${name}
        DESTINATION ${CMAKE_INSTALL_FULL_LIBDIR}/cc_tools_qt/plugin)

    if (OPT_INSTALL_DEFAULT_CONFIG)
        install (
            FILES cc_tools_qt_plugin/cc_mqtt5/plugin/${protocol}.cfg
            DESTINATION ${CMAKE_INSTALL_FULL_DATAROOTDIR}/cc_tools_qt)
    endif()
endfunction()

######################################################################

if (TARGET cc::cc_tools_qt)
    get_target_property(cc_inc cc::cc_tools_qt INTERFACE_INCLUDE_DIRECTORIES)

    if (NOT cc_inc)
        message (FATAL_ERROR "No include directories are specified for cc::cc_tools_qt")
    endif ()

    # Global include is required for "moc"
    include_directories (${cc_inc})
endif ()

cc_plugin_Message()

cc_plugin ("CC_MQTT_v5" "Message")
