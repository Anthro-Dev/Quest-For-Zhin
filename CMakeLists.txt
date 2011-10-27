project(questforzhin)

add_executable(questforzhin main.cpp)

add_subdirectory(interface)
add_subdirectory(maps)
add_subdirectory(combat)
add_subdirectory(parser)
add_subdirectory(characters)
add_subdirectory(items)
add_subdirectory(saves)