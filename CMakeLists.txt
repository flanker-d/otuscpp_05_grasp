cmake_minimum_required(VERSION 3.2)

project(corel_draw_killer VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})

include_directories (${PROJECT_SOURCE_DIR})

configure_file(version.h.in version.h)

add_library(primitives primitives/circle.cpp primitives/iprimitive.cpp primitives/line.cpp primitives/rectangle.cpp)
add_library(file_handlers file_handlers/file_handlers.cpp file_handlers/iexporter.cpp file_handlers/iimporter.cpp file_handlers/ifile_handler.cpp)
add_library(svg file_handlers/svg/svg_importer.cpp file_handlers/svg/svg_exporter.cpp file_handlers/svg/svg_handler.cpp)
add_library(cdr file_handlers/cdr/cdr_importer.cpp file_handlers/cdr/cdr_exporter.cpp file_handlers/cdr/cdr_handler.cpp)

add_executable(corel_draw_killer document.cpp interface.cpp workspace.cpp main.cpp)
target_link_libraries(corel_draw_killer primitives file_handlers svg cdr)

set_target_properties(corel_draw_killer primitives file_handlers svg cdr PROPERTIES
  CXX_STANDARD 14
  CXX_STANDARD_REQUIRED ON
  COMPILE_OPTIONS -Wpedantic -Wall -Wextra
)

install(TARGETS corel_draw_killer primitives file_handlers svg cdr
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT artyom.sorokoumov@gmail.com)

include(CPack)
