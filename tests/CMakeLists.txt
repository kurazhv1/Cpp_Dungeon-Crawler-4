# 'Google_test' is the subproject name
project(tests)

# 'lib' is the folder with Google Test sources
add_subdirectory(lib)

find_package (SFML 2.5 COMPONENTS graphics audio network REQUIRED)


include_directories(tests/lib/googletest/include tests/lib/googletest/src)
# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
add_executable(Google_Tests_run tests.cpp testpostype.cpp testgameblock.cpp
        ../src/GameBlock.cpp
        ../src/GameBlock.hpp
        ../src/Goal.hpp
        ../src/header.hpp
        ../src/Item.cpp
        ../src/Item.hpp
#        ../src/Map.cpp
#        ../src/Map.hpp
        ../src/Monster.cpp
        ../src/Monster.hpp
        ../src/Player.cpp
        ../src/Player.hpp
        ../src/Potion.cpp
        ../src/Potion.hpp
        ../src/readme.md
        ../src/Road.hpp
#        ../src/Turn.cpp
#        ../src/Turn.hpp
        ../src/Wall.hpp
        ../src/Weapon.cpp
        ../src/Weapon.hpp testitem.cpp testwallroadgoal.cpp testplayer.cpp testmonster.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main sfml-system sfml-graphics sfml-audio sfml-network)

#target_link_libraries (${PROJECT_NAME} PUBLIC sfml-system sfml-graphics sfml-audio sfml-network)