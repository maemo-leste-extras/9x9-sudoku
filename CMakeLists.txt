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

add_custom_command(
        OUTPUT tile50.c tile50.h
        COMMAND ${PERL_EXECUTABLE} ${CMAKE_SOURCE_DIR}/readrgbc.pl tile50 ${CMAKE_SOURCE_DIR}/tile50src.c
        DEPENDS tile50src.c readrgbc.pl
)

add_custom_command(
        OUTPUT up64.c up64.h
        COMMAND ${PERL_EXECUTABLE} ${CMAKE_SOURCE_DIR}/readrgbc.pl up64 ${CMAKE_SOURCE_DIR}/up64src.c
        DEPENDS up64src.c readrgbc.pl
)

add_custom_command(
        OUTPUT down64.c down64.h
        COMMAND ${PERL_EXECUTABLE} ${CMAKE_SOURCE_DIR}/readrgbc.pl down64 ${CMAKE_SOURCE_DIR}/down64src.c
        DEPENDS down64src.c readrgbc.pl
)

set(GENERATED
        tile50.c
        up64.c
        down64.c
)

set(SOURCES
        gui.c
        lineread.c
        uutil.c
        ${GENERATED}
)

foreach(f gui.c lineread.c uutil.c)
    add_custom_command(
            OUTPUT ${f}.stamp
            COMMAND sh ${CMAKE_SOURCE_DIR}/${f}
            COMMAND ${CMAKE_COMMAND} -E touch ${f}.stamp
            DEPENDS ${f}
    )
    list(APPEND PREGEN_STAMPS ${f}.stamp)
endforeach()

add_executable(gui ${SOURCES} ${PREGEN_STAMPS})

target_include_directories(gui PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
        ${GUI_CFLAGS}
)

target_compile_options(gui PRIVATE ${GUI_CFLAGS})
target_link_libraries(gui PRIVATE ${GUI_LIBS})

install(TARGETS gui DESTINATION opt/9x9-sudoku)

install(PROGRAMS game.pl
        DESTINATION opt/9x9-sudoku
)

install(FILES
        pzl1.gz pzl2.gz pzl3.gz pzl4.gz pzl5.gz
        DESTINATION opt/9x9-sudoku
)

install(FILES
        9x9-sudoku-64.png
        DESTINATION ${CMAKE_INSTALL_DATADIR}/icons/hicolor/64x64/apps
        RENAME 9x9-sudoku.png
)

install(FILES
        9x9-sudoku.desktop
        DESTINATION ${CMAKE_INSTALL_DATADIR}/applications/hildon
)

install(FILES
        9x9-sudoku.service
        DESTINATION ${CMAKE_INSTALL_DATADIR}/dbus-1/services
)