cmake_minimum_required(VERSION 3.16)

project(Linkedlist_task LANGUAGES C)

add_executable(Linkedlist_task main.c
    insertion.h
    insertion.c
    deletion.h
    deletion.c
    traversal.h
    traversal.c
    search.h
    search.c)

include(GNUInstallDirs)
install(TARGETS Linkedlist_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
