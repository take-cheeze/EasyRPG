cmake_minimum_required(VERSION 2.6)

project("editor_vala" CXX C)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../cmake_module)
find_package(Vala REQUIRED)
include(${VALA_USE_FILE})

file(GLOB VALA_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.vala)
file(GLOB VALA_APIS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.vapi)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

foreach(i ${VALA_SRCS})
  get_filename_component(out ${i} NAME)
  list(APPEND VALA_SRCS_AUX src/${out})
endforeach()

if(NOT DEFINED GTK_VERSION)
  set(GTK_VERSION 3)
endif()

if(${GTK_VERSION} EQUAL 2)
  find_package(GTK2 REQUIRED)
  include_directories(${GTK2_INCLUDE_DIRS})

  vala_precompile(VALA_C
    SOURCES ${VALA_SRCS_AUX}
    PACKAGES gtk+-2.0 gio-2.0 posix libxml-2.0 gdk-2.0
    OPTIONS -D GTK_MAJOR_VERSION_${GTK_VERSION} --thread
    CUSTOM_VAPIS ${VALA_APIS}
    GENERATE_VAPI editor_vala
    GENERATE_HEADER editor_vala)

  set(GTK_LIBRARIES ${GTK2_LIBRARIES})
elseif(${GTK_VERSION} EQUAL 3)
  find_package(GTK3 REQUIRED)
  include_directories(${GTK3_INCLUDE_DIRS})

  vala_precompile(VALA_C
    SOURCES ${VALA_SRCS_AUX}
    PACKAGES gtk+-3.0 gio-2.0 posix libxml-2.0 gdk-3.0
    OPTIONS -D GTK_MAJOR_VERSION_${GTK_VERSION} --thread
    CUSTOM_VAPIS ${VALA_APIS}
    GENERATE_VAPI editor_vala
    GENERATE_HEADER editor_vala)

  set(GTK_LIBRARIES ${GTK3_LIBRARIES})
  foreach(i "pango-1.0" "cairo" "cairo-gobject" "gobject-2.0" "gdk-3" "gdk_pixbuf-2.0" "gio-2.0" "gthread-2.0" "glib-2.0")
    find_library(lib_${i} ${i})
    if(EXISTS ${lib_${i}})
      message(STATUS "${i} found: ${lib_${i}}")
      list(APPEND GTK_LIBRARIES ${lib_${i}})
    else()
      message(SEND_ERROR "${i} not found")
    endif()
  endforeach()
else()
  message(FATAL_ERROR "unknown gtk version")
endif()


add_executable(${PROJECT_NAME} MACOSX_BUNDLE ${VALA_C})
target_link_libraries(${PROJECT_NAME} ${GTK_LIBRARIES})
