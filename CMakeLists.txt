cmake_minimum_required(VERSION 3.20)
project(9x9-sudoku C)

include(GNUInstallDirs)
find_package(PkgConfig REQUIRED)
find_package(Perl REQUIRED)

pkg_check_modules(HILDON hildon-1 libosso)
if(HILDON_FOUND)
    set(GUI_LIBS ${HILDON_LIBRARIES})
    set(GUI_CFLAGS ${HILDON_CFLAGS})
else()
    pkg_check_modules(GTK REQUIRED gtk+-2.0)
    set(GUI_LIBS ${GTK_LIBRARIES})
    set(GUI_CFLAGS ${GTK_CFLAGS} -DNOTMAEMO)
endif()

set(GENERATED_FILES
        tile50.c tile50.h
        up64.c up64.h
        down64.c down64.h
)

foreach(f tile50 up64 down64)
    add_custom_command(
            OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/${f}.c ${CMAKE_CURRENT_BINARY_DIR}/${f}.h
            COMMAND ${PERL_EXECUTABLE} ${CMAKE_SOURCE_DIR}/readrgbc.pl ${f} ${CMAKE_SOURCE_DIR}/${f}src.c
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
            DEPENDS ${CMAKE_SOURCE_DIR}/${f}src.c ${CMAKE_SOURCE_DIR}/readrgbc.pl
    )
endforeach()

add_custom_target(generate_tiles
        DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/tile50.c
        ${CMAKE_CURRENT_BINARY_DIR}/tile50.h
        ${CMAKE_CURRENT_BINARY_DIR}/up64.c
        ${CMAKE_CURRENT_BINARY_DIR}/up64.h
        ${CMAKE_CURRENT_BINARY_DIR}/down64.c
        ${CMAKE_CURRENT_BINARY_DIR}/down64.h
)

set(SOURCES
        gui.c
        lineread.c
        uutil.c
        ${CMAKE_CURRENT_BINARY_DIR}/tile50.c
        ${CMAKE_CURRENT_BINARY_DIR}/up64.c
        ${CMAKE_CURRENT_BINARY_DIR}/down64.c
)

add_executable(gui ${SOURCES})
add_dependencies(gui generate_tiles)

target_include_directories(gui PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
        ${GUI_CFLAGS}
)

target_compile_options(gui PRIVATE ${GUI_CFLAGS})
target_link_libraries(gui PRIVATE ${GUI_LIBS})

install(FILES pzl1.gz pzl2.gz pzl3.gz pzl4.gz pzl5.gz DESTINATION opt/9x9-sudoku)
install(FILES 9x9-sudoku-64.png DESTINATION ${CMAKE_INSTALL_DATADIR}/icons/hicolor/64x64/apps RENAME 9x9-sudoku.png)
install(FILES 9x9-sudoku.desktop DESTINATION ${CMAKE_INSTALL_DATADIR}/applications/hildon)
install(FILES 9x9-sudoku.service DESTINATION ${CMAKE_INSTALL_DATADIR}/dbus-1/services)

install(TARGETS gui
        DESTINATION opt/9x9-sudoku
        PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
)

install(PROGRAMS game.pl
        DESTINATION opt/9x9-sudoku
        PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
)
