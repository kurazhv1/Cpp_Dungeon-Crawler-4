# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Coding\CMake\bin\cmake.exe

# The command to remove a file.
RM = D:\Coding\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\build

# Include any dependencies generated for this target.
include CMakeFiles/Exercise.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Exercise.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Exercise.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Exercise.dir/flags.make

CMakeFiles/Exercise.dir/src/GameBlock.cpp.obj: CMakeFiles/Exercise.dir/flags.make
CMakeFiles/Exercise.dir/src/GameBlock.cpp.obj: CMakeFiles/Exercise.dir/includes_CXX.rsp
CMakeFiles/Exercise.dir/src/GameBlock.cpp.obj: D:/All_Codes/C++/Aalto_Lectures/project_Dungeon_Crawler_4/src/GameBlock.cpp
CMakeFiles/Exercise.dir/src/GameBlock.cpp.obj: CMakeFiles/Exercise.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Exercise.dir/src/GameBlock.cpp.obj"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Exercise.dir/src/GameBlock.cpp.obj -MF CMakeFiles\Exercise.dir\src\GameBlock.cpp.obj.d -o CMakeFiles\Exercise.dir\src\GameBlock.cpp.obj -c D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\GameBlock.cpp

CMakeFiles/Exercise.dir/src/GameBlock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exercise.dir/src/GameBlock.cpp.i"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\GameBlock.cpp > CMakeFiles\Exercise.dir\src\GameBlock.cpp.i

CMakeFiles/Exercise.dir/src/GameBlock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exercise.dir/src/GameBlock.cpp.s"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\GameBlock.cpp -o CMakeFiles\Exercise.dir\src\GameBlock.cpp.s

CMakeFiles/Exercise.dir/src/Item.cpp.obj: CMakeFiles/Exercise.dir/flags.make
CMakeFiles/Exercise.dir/src/Item.cpp.obj: CMakeFiles/Exercise.dir/includes_CXX.rsp
CMakeFiles/Exercise.dir/src/Item.cpp.obj: D:/All_Codes/C++/Aalto_Lectures/project_Dungeon_Crawler_4/src/Item.cpp
CMakeFiles/Exercise.dir/src/Item.cpp.obj: CMakeFiles/Exercise.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Exercise.dir/src/Item.cpp.obj"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Exercise.dir/src/Item.cpp.obj -MF CMakeFiles\Exercise.dir\src\Item.cpp.obj.d -o CMakeFiles\Exercise.dir\src\Item.cpp.obj -c D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Item.cpp

CMakeFiles/Exercise.dir/src/Item.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exercise.dir/src/Item.cpp.i"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Item.cpp > CMakeFiles\Exercise.dir\src\Item.cpp.i

CMakeFiles/Exercise.dir/src/Item.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exercise.dir/src/Item.cpp.s"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Item.cpp -o CMakeFiles\Exercise.dir\src\Item.cpp.s

CMakeFiles/Exercise.dir/src/Map.cpp.obj: CMakeFiles/Exercise.dir/flags.make
CMakeFiles/Exercise.dir/src/Map.cpp.obj: CMakeFiles/Exercise.dir/includes_CXX.rsp
CMakeFiles/Exercise.dir/src/Map.cpp.obj: D:/All_Codes/C++/Aalto_Lectures/project_Dungeon_Crawler_4/src/Map.cpp
CMakeFiles/Exercise.dir/src/Map.cpp.obj: CMakeFiles/Exercise.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Exercise.dir/src/Map.cpp.obj"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Exercise.dir/src/Map.cpp.obj -MF CMakeFiles\Exercise.dir\src\Map.cpp.obj.d -o CMakeFiles\Exercise.dir\src\Map.cpp.obj -c D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Map.cpp

CMakeFiles/Exercise.dir/src/Map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exercise.dir/src/Map.cpp.i"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Map.cpp > CMakeFiles\Exercise.dir\src\Map.cpp.i

CMakeFiles/Exercise.dir/src/Map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exercise.dir/src/Map.cpp.s"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Map.cpp -o CMakeFiles\Exercise.dir\src\Map.cpp.s

CMakeFiles/Exercise.dir/src/Monster.cpp.obj: CMakeFiles/Exercise.dir/flags.make
CMakeFiles/Exercise.dir/src/Monster.cpp.obj: CMakeFiles/Exercise.dir/includes_CXX.rsp
CMakeFiles/Exercise.dir/src/Monster.cpp.obj: D:/All_Codes/C++/Aalto_Lectures/project_Dungeon_Crawler_4/src/Monster.cpp
CMakeFiles/Exercise.dir/src/Monster.cpp.obj: CMakeFiles/Exercise.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Exercise.dir/src/Monster.cpp.obj"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Exercise.dir/src/Monster.cpp.obj -MF CMakeFiles\Exercise.dir\src\Monster.cpp.obj.d -o CMakeFiles\Exercise.dir\src\Monster.cpp.obj -c D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Monster.cpp

CMakeFiles/Exercise.dir/src/Monster.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exercise.dir/src/Monster.cpp.i"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Monster.cpp > CMakeFiles\Exercise.dir\src\Monster.cpp.i

CMakeFiles/Exercise.dir/src/Monster.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exercise.dir/src/Monster.cpp.s"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Monster.cpp -o CMakeFiles\Exercise.dir\src\Monster.cpp.s

CMakeFiles/Exercise.dir/src/Player.cpp.obj: CMakeFiles/Exercise.dir/flags.make
CMakeFiles/Exercise.dir/src/Player.cpp.obj: CMakeFiles/Exercise.dir/includes_CXX.rsp
CMakeFiles/Exercise.dir/src/Player.cpp.obj: D:/All_Codes/C++/Aalto_Lectures/project_Dungeon_Crawler_4/src/Player.cpp
CMakeFiles/Exercise.dir/src/Player.cpp.obj: CMakeFiles/Exercise.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Exercise.dir/src/Player.cpp.obj"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Exercise.dir/src/Player.cpp.obj -MF CMakeFiles\Exercise.dir\src\Player.cpp.obj.d -o CMakeFiles\Exercise.dir\src\Player.cpp.obj -c D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Player.cpp

CMakeFiles/Exercise.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exercise.dir/src/Player.cpp.i"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Player.cpp > CMakeFiles\Exercise.dir\src\Player.cpp.i

CMakeFiles/Exercise.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exercise.dir/src/Player.cpp.s"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Player.cpp -o CMakeFiles\Exercise.dir\src\Player.cpp.s

CMakeFiles/Exercise.dir/src/Potion.cpp.obj: CMakeFiles/Exercise.dir/flags.make
CMakeFiles/Exercise.dir/src/Potion.cpp.obj: CMakeFiles/Exercise.dir/includes_CXX.rsp
CMakeFiles/Exercise.dir/src/Potion.cpp.obj: D:/All_Codes/C++/Aalto_Lectures/project_Dungeon_Crawler_4/src/Potion.cpp
CMakeFiles/Exercise.dir/src/Potion.cpp.obj: CMakeFiles/Exercise.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Exercise.dir/src/Potion.cpp.obj"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Exercise.dir/src/Potion.cpp.obj -MF CMakeFiles\Exercise.dir\src\Potion.cpp.obj.d -o CMakeFiles\Exercise.dir\src\Potion.cpp.obj -c D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Potion.cpp

CMakeFiles/Exercise.dir/src/Potion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exercise.dir/src/Potion.cpp.i"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Potion.cpp > CMakeFiles\Exercise.dir\src\Potion.cpp.i

CMakeFiles/Exercise.dir/src/Potion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exercise.dir/src/Potion.cpp.s"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Potion.cpp -o CMakeFiles\Exercise.dir\src\Potion.cpp.s

CMakeFiles/Exercise.dir/src/Turn.cpp.obj: CMakeFiles/Exercise.dir/flags.make
CMakeFiles/Exercise.dir/src/Turn.cpp.obj: CMakeFiles/Exercise.dir/includes_CXX.rsp
CMakeFiles/Exercise.dir/src/Turn.cpp.obj: D:/All_Codes/C++/Aalto_Lectures/project_Dungeon_Crawler_4/src/Turn.cpp
CMakeFiles/Exercise.dir/src/Turn.cpp.obj: CMakeFiles/Exercise.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Exercise.dir/src/Turn.cpp.obj"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Exercise.dir/src/Turn.cpp.obj -MF CMakeFiles\Exercise.dir\src\Turn.cpp.obj.d -o CMakeFiles\Exercise.dir\src\Turn.cpp.obj -c D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Turn.cpp

CMakeFiles/Exercise.dir/src/Turn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exercise.dir/src/Turn.cpp.i"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Turn.cpp > CMakeFiles\Exercise.dir\src\Turn.cpp.i

CMakeFiles/Exercise.dir/src/Turn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exercise.dir/src/Turn.cpp.s"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Turn.cpp -o CMakeFiles\Exercise.dir\src\Turn.cpp.s

CMakeFiles/Exercise.dir/src/Weapon.cpp.obj: CMakeFiles/Exercise.dir/flags.make
CMakeFiles/Exercise.dir/src/Weapon.cpp.obj: CMakeFiles/Exercise.dir/includes_CXX.rsp
CMakeFiles/Exercise.dir/src/Weapon.cpp.obj: D:/All_Codes/C++/Aalto_Lectures/project_Dungeon_Crawler_4/src/Weapon.cpp
CMakeFiles/Exercise.dir/src/Weapon.cpp.obj: CMakeFiles/Exercise.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Exercise.dir/src/Weapon.cpp.obj"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Exercise.dir/src/Weapon.cpp.obj -MF CMakeFiles\Exercise.dir\src\Weapon.cpp.obj.d -o CMakeFiles\Exercise.dir\src\Weapon.cpp.obj -c D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Weapon.cpp

CMakeFiles/Exercise.dir/src/Weapon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exercise.dir/src/Weapon.cpp.i"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Weapon.cpp > CMakeFiles\Exercise.dir\src\Weapon.cpp.i

CMakeFiles/Exercise.dir/src/Weapon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exercise.dir/src/Weapon.cpp.s"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\Weapon.cpp -o CMakeFiles\Exercise.dir\src\Weapon.cpp.s

CMakeFiles/Exercise.dir/src/main.cpp.obj: CMakeFiles/Exercise.dir/flags.make
CMakeFiles/Exercise.dir/src/main.cpp.obj: CMakeFiles/Exercise.dir/includes_CXX.rsp
CMakeFiles/Exercise.dir/src/main.cpp.obj: D:/All_Codes/C++/Aalto_Lectures/project_Dungeon_Crawler_4/src/main.cpp
CMakeFiles/Exercise.dir/src/main.cpp.obj: CMakeFiles/Exercise.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Exercise.dir/src/main.cpp.obj"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Exercise.dir/src/main.cpp.obj -MF CMakeFiles\Exercise.dir\src\main.cpp.obj.d -o CMakeFiles\Exercise.dir\src\main.cpp.obj -c D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\main.cpp

CMakeFiles/Exercise.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exercise.dir/src/main.cpp.i"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\main.cpp > CMakeFiles\Exercise.dir\src\main.cpp.i

CMakeFiles/Exercise.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exercise.dir/src/main.cpp.s"
	D:\Coding\MinGW-win64\MinGW-win64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\src\main.cpp -o CMakeFiles\Exercise.dir\src\main.cpp.s

# Object files for target Exercise
Exercise_OBJECTS = \
"CMakeFiles/Exercise.dir/src/GameBlock.cpp.obj" \
"CMakeFiles/Exercise.dir/src/Item.cpp.obj" \
"CMakeFiles/Exercise.dir/src/Map.cpp.obj" \
"CMakeFiles/Exercise.dir/src/Monster.cpp.obj" \
"CMakeFiles/Exercise.dir/src/Player.cpp.obj" \
"CMakeFiles/Exercise.dir/src/Potion.cpp.obj" \
"CMakeFiles/Exercise.dir/src/Turn.cpp.obj" \
"CMakeFiles/Exercise.dir/src/Weapon.cpp.obj" \
"CMakeFiles/Exercise.dir/src/main.cpp.obj"

# External object files for target Exercise
Exercise_EXTERNAL_OBJECTS =

Exercise.exe: CMakeFiles/Exercise.dir/src/GameBlock.cpp.obj
Exercise.exe: CMakeFiles/Exercise.dir/src/Item.cpp.obj
Exercise.exe: CMakeFiles/Exercise.dir/src/Map.cpp.obj
Exercise.exe: CMakeFiles/Exercise.dir/src/Monster.cpp.obj
Exercise.exe: CMakeFiles/Exercise.dir/src/Player.cpp.obj
Exercise.exe: CMakeFiles/Exercise.dir/src/Potion.cpp.obj
Exercise.exe: CMakeFiles/Exercise.dir/src/Turn.cpp.obj
Exercise.exe: CMakeFiles/Exercise.dir/src/Weapon.cpp.obj
Exercise.exe: CMakeFiles/Exercise.dir/src/main.cpp.obj
Exercise.exe: CMakeFiles/Exercise.dir/build.make
Exercise.exe: CMakeFiles/Exercise.dir/linklibs.rsp
Exercise.exe: CMakeFiles/Exercise.dir/objects1.rsp
Exercise.exe: CMakeFiles/Exercise.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable Exercise.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Exercise.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Exercise.dir/build: Exercise.exe
.PHONY : CMakeFiles/Exercise.dir/build

CMakeFiles/Exercise.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Exercise.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Exercise.dir/clean

CMakeFiles/Exercise.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4 D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4 D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\build D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\build D:\All_Codes\C++\Aalto_Lectures\project_Dungeon_Crawler_4\build\CMakeFiles\Exercise.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Exercise.dir/depend

