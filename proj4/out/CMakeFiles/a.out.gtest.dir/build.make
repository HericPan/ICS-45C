# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ics45c/projects/proj4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ics45c/projects/proj4/out

# Include any dependencies generated for this target.
include CMakeFiles/a.out.gtest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a.out.gtest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a.out.gtest.dir/flags.make

CMakeFiles/a.out.gtest.dir/gtest/BooEditTests.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/gtest/BooEditTests.cpp.o: ../gtest/BooEditTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a.out.gtest.dir/gtest/BooEditTests.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/gtest/BooEditTests.cpp.o -c /home/ics45c/projects/proj4/gtest/BooEditTests.cpp

CMakeFiles/a.out.gtest.dir/gtest/BooEditTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/gtest/BooEditTests.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/gtest/BooEditTests.cpp > CMakeFiles/a.out.gtest.dir/gtest/BooEditTests.cpp.i

CMakeFiles/a.out.gtest.dir/gtest/BooEditTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/gtest/BooEditTests.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/gtest/BooEditTests.cpp -o CMakeFiles/a.out.gtest.dir/gtest/BooEditTests.cpp.s

CMakeFiles/a.out.gtest.dir/gtest/MockInteractionReader.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/gtest/MockInteractionReader.cpp.o: ../gtest/MockInteractionReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/a.out.gtest.dir/gtest/MockInteractionReader.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/gtest/MockInteractionReader.cpp.o -c /home/ics45c/projects/proj4/gtest/MockInteractionReader.cpp

CMakeFiles/a.out.gtest.dir/gtest/MockInteractionReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/gtest/MockInteractionReader.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/gtest/MockInteractionReader.cpp > CMakeFiles/a.out.gtest.dir/gtest/MockInteractionReader.cpp.i

CMakeFiles/a.out.gtest.dir/gtest/MockInteractionReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/gtest/MockInteractionReader.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/gtest/MockInteractionReader.cpp -o CMakeFiles/a.out.gtest.dir/gtest/MockInteractionReader.cpp.s

CMakeFiles/a.out.gtest.dir/gtest/MockKeypressReader.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/gtest/MockKeypressReader.cpp.o: ../gtest/MockKeypressReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/a.out.gtest.dir/gtest/MockKeypressReader.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/gtest/MockKeypressReader.cpp.o -c /home/ics45c/projects/proj4/gtest/MockKeypressReader.cpp

CMakeFiles/a.out.gtest.dir/gtest/MockKeypressReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/gtest/MockKeypressReader.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/gtest/MockKeypressReader.cpp > CMakeFiles/a.out.gtest.dir/gtest/MockKeypressReader.cpp.i

CMakeFiles/a.out.gtest.dir/gtest/MockKeypressReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/gtest/MockKeypressReader.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/gtest/MockKeypressReader.cpp -o CMakeFiles/a.out.gtest.dir/gtest/MockKeypressReader.cpp.s

CMakeFiles/a.out.gtest.dir/gtest/gtestmain.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/gtest/gtestmain.cpp.o: ../gtest/gtestmain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/a.out.gtest.dir/gtest/gtestmain.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/gtest/gtestmain.cpp.o -c /home/ics45c/projects/proj4/gtest/gtestmain.cpp

CMakeFiles/a.out.gtest.dir/gtest/gtestmain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/gtest/gtestmain.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/gtest/gtestmain.cpp > CMakeFiles/a.out.gtest.dir/gtest/gtestmain.cpp.i

CMakeFiles/a.out.gtest.dir/gtest/gtestmain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/gtest/gtestmain.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/gtest/gtestmain.cpp -o CMakeFiles/a.out.gtest.dir/gtest/gtestmain.cpp.s

CMakeFiles/a.out.gtest.dir/app/BooEdit.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/BooEdit.cpp.o: ../app/BooEdit.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/a.out.gtest.dir/app/BooEdit.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/BooEdit.cpp.o -c /home/ics45c/projects/proj4/app/BooEdit.cpp

CMakeFiles/a.out.gtest.dir/app/BooEdit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/BooEdit.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/BooEdit.cpp > CMakeFiles/a.out.gtest.dir/app/BooEdit.cpp.i

CMakeFiles/a.out.gtest.dir/app/BooEdit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/BooEdit.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/BooEdit.cpp -o CMakeFiles/a.out.gtest.dir/app/BooEdit.cpp.s

CMakeFiles/a.out.gtest.dir/app/BooEditLog.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/BooEditLog.cpp.o: ../app/BooEditLog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/a.out.gtest.dir/app/BooEditLog.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/BooEditLog.cpp.o -c /home/ics45c/projects/proj4/app/BooEditLog.cpp

CMakeFiles/a.out.gtest.dir/app/BooEditLog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/BooEditLog.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/BooEditLog.cpp > CMakeFiles/a.out.gtest.dir/app/BooEditLog.cpp.i

CMakeFiles/a.out.gtest.dir/app/BooEditLog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/BooEditLog.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/BooEditLog.cpp -o CMakeFiles/a.out.gtest.dir/app/BooEditLog.cpp.s

CMakeFiles/a.out.gtest.dir/app/Command_Backspace.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/Command_Backspace.cpp.o: ../app/Command_Backspace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/a.out.gtest.dir/app/Command_Backspace.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/Command_Backspace.cpp.o -c /home/ics45c/projects/proj4/app/Command_Backspace.cpp

CMakeFiles/a.out.gtest.dir/app/Command_Backspace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/Command_Backspace.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/Command_Backspace.cpp > CMakeFiles/a.out.gtest.dir/app/Command_Backspace.cpp.i

CMakeFiles/a.out.gtest.dir/app/Command_Backspace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/Command_Backspace.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/Command_Backspace.cpp -o CMakeFiles/a.out.gtest.dir/app/Command_Backspace.cpp.s

CMakeFiles/a.out.gtest.dir/app/Command_DeleteLine.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/Command_DeleteLine.cpp.o: ../app/Command_DeleteLine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/a.out.gtest.dir/app/Command_DeleteLine.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/Command_DeleteLine.cpp.o -c /home/ics45c/projects/proj4/app/Command_DeleteLine.cpp

CMakeFiles/a.out.gtest.dir/app/Command_DeleteLine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/Command_DeleteLine.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/Command_DeleteLine.cpp > CMakeFiles/a.out.gtest.dir/app/Command_DeleteLine.cpp.i

CMakeFiles/a.out.gtest.dir/app/Command_DeleteLine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/Command_DeleteLine.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/Command_DeleteLine.cpp -o CMakeFiles/a.out.gtest.dir/app/Command_DeleteLine.cpp.s

CMakeFiles/a.out.gtest.dir/app/Command_End.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/Command_End.cpp.o: ../app/Command_End.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/a.out.gtest.dir/app/Command_End.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/Command_End.cpp.o -c /home/ics45c/projects/proj4/app/Command_End.cpp

CMakeFiles/a.out.gtest.dir/app/Command_End.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/Command_End.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/Command_End.cpp > CMakeFiles/a.out.gtest.dir/app/Command_End.cpp.i

CMakeFiles/a.out.gtest.dir/app/Command_End.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/Command_End.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/Command_End.cpp -o CMakeFiles/a.out.gtest.dir/app/Command_End.cpp.s

CMakeFiles/a.out.gtest.dir/app/Command_Home.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/Command_Home.cpp.o: ../app/Command_Home.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/a.out.gtest.dir/app/Command_Home.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/Command_Home.cpp.o -c /home/ics45c/projects/proj4/app/Command_Home.cpp

CMakeFiles/a.out.gtest.dir/app/Command_Home.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/Command_Home.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/Command_Home.cpp > CMakeFiles/a.out.gtest.dir/app/Command_Home.cpp.i

CMakeFiles/a.out.gtest.dir/app/Command_Home.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/Command_Home.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/Command_Home.cpp -o CMakeFiles/a.out.gtest.dir/app/Command_Home.cpp.s

CMakeFiles/a.out.gtest.dir/app/Command_MoveDown.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/Command_MoveDown.cpp.o: ../app/Command_MoveDown.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/a.out.gtest.dir/app/Command_MoveDown.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/Command_MoveDown.cpp.o -c /home/ics45c/projects/proj4/app/Command_MoveDown.cpp

CMakeFiles/a.out.gtest.dir/app/Command_MoveDown.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/Command_MoveDown.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/Command_MoveDown.cpp > CMakeFiles/a.out.gtest.dir/app/Command_MoveDown.cpp.i

CMakeFiles/a.out.gtest.dir/app/Command_MoveDown.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/Command_MoveDown.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/Command_MoveDown.cpp -o CMakeFiles/a.out.gtest.dir/app/Command_MoveDown.cpp.s

CMakeFiles/a.out.gtest.dir/app/Command_MoveLeft.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/Command_MoveLeft.cpp.o: ../app/Command_MoveLeft.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/a.out.gtest.dir/app/Command_MoveLeft.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/Command_MoveLeft.cpp.o -c /home/ics45c/projects/proj4/app/Command_MoveLeft.cpp

CMakeFiles/a.out.gtest.dir/app/Command_MoveLeft.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/Command_MoveLeft.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/Command_MoveLeft.cpp > CMakeFiles/a.out.gtest.dir/app/Command_MoveLeft.cpp.i

CMakeFiles/a.out.gtest.dir/app/Command_MoveLeft.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/Command_MoveLeft.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/Command_MoveLeft.cpp -o CMakeFiles/a.out.gtest.dir/app/Command_MoveLeft.cpp.s

CMakeFiles/a.out.gtest.dir/app/Command_MoveRight.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/Command_MoveRight.cpp.o: ../app/Command_MoveRight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/a.out.gtest.dir/app/Command_MoveRight.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/Command_MoveRight.cpp.o -c /home/ics45c/projects/proj4/app/Command_MoveRight.cpp

CMakeFiles/a.out.gtest.dir/app/Command_MoveRight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/Command_MoveRight.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/Command_MoveRight.cpp > CMakeFiles/a.out.gtest.dir/app/Command_MoveRight.cpp.i

CMakeFiles/a.out.gtest.dir/app/Command_MoveRight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/Command_MoveRight.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/Command_MoveRight.cpp -o CMakeFiles/a.out.gtest.dir/app/Command_MoveRight.cpp.s

CMakeFiles/a.out.gtest.dir/app/Command_MoveUp.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/Command_MoveUp.cpp.o: ../app/Command_MoveUp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/a.out.gtest.dir/app/Command_MoveUp.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/Command_MoveUp.cpp.o -c /home/ics45c/projects/proj4/app/Command_MoveUp.cpp

CMakeFiles/a.out.gtest.dir/app/Command_MoveUp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/Command_MoveUp.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/Command_MoveUp.cpp > CMakeFiles/a.out.gtest.dir/app/Command_MoveUp.cpp.i

CMakeFiles/a.out.gtest.dir/app/Command_MoveUp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/Command_MoveUp.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/Command_MoveUp.cpp -o CMakeFiles/a.out.gtest.dir/app/Command_MoveUp.cpp.s

CMakeFiles/a.out.gtest.dir/app/Command_NewLine.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/Command_NewLine.cpp.o: ../app/Command_NewLine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/a.out.gtest.dir/app/Command_NewLine.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/Command_NewLine.cpp.o -c /home/ics45c/projects/proj4/app/Command_NewLine.cpp

CMakeFiles/a.out.gtest.dir/app/Command_NewLine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/Command_NewLine.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/Command_NewLine.cpp > CMakeFiles/a.out.gtest.dir/app/Command_NewLine.cpp.i

CMakeFiles/a.out.gtest.dir/app/Command_NewLine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/Command_NewLine.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/Command_NewLine.cpp -o CMakeFiles/a.out.gtest.dir/app/Command_NewLine.cpp.s

CMakeFiles/a.out.gtest.dir/app/Command_Normal.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/Command_Normal.cpp.o: ../app/Command_Normal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/a.out.gtest.dir/app/Command_Normal.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/Command_Normal.cpp.o -c /home/ics45c/projects/proj4/app/Command_Normal.cpp

CMakeFiles/a.out.gtest.dir/app/Command_Normal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/Command_Normal.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/Command_Normal.cpp > CMakeFiles/a.out.gtest.dir/app/Command_Normal.cpp.i

CMakeFiles/a.out.gtest.dir/app/Command_Normal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/Command_Normal.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/Command_Normal.cpp -o CMakeFiles/a.out.gtest.dir/app/Command_Normal.cpp.s

CMakeFiles/a.out.gtest.dir/app/EditorModel.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/EditorModel.cpp.o: ../app/EditorModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/a.out.gtest.dir/app/EditorModel.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/EditorModel.cpp.o -c /home/ics45c/projects/proj4/app/EditorModel.cpp

CMakeFiles/a.out.gtest.dir/app/EditorModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/EditorModel.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/EditorModel.cpp > CMakeFiles/a.out.gtest.dir/app/EditorModel.cpp.i

CMakeFiles/a.out.gtest.dir/app/EditorModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/EditorModel.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/EditorModel.cpp -o CMakeFiles/a.out.gtest.dir/app/EditorModel.cpp.s

CMakeFiles/a.out.gtest.dir/app/InteractionProcessor.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/InteractionProcessor.cpp.o: ../app/InteractionProcessor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/a.out.gtest.dir/app/InteractionProcessor.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/InteractionProcessor.cpp.o -c /home/ics45c/projects/proj4/app/InteractionProcessor.cpp

CMakeFiles/a.out.gtest.dir/app/InteractionProcessor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/InteractionProcessor.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/InteractionProcessor.cpp > CMakeFiles/a.out.gtest.dir/app/InteractionProcessor.cpp.i

CMakeFiles/a.out.gtest.dir/app/InteractionProcessor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/InteractionProcessor.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/InteractionProcessor.cpp -o CMakeFiles/a.out.gtest.dir/app/InteractionProcessor.cpp.s

CMakeFiles/a.out.gtest.dir/app/KeypressInteractionReader.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/KeypressInteractionReader.cpp.o: ../app/KeypressInteractionReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/a.out.gtest.dir/app/KeypressInteractionReader.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/KeypressInteractionReader.cpp.o -c /home/ics45c/projects/proj4/app/KeypressInteractionReader.cpp

CMakeFiles/a.out.gtest.dir/app/KeypressInteractionReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/KeypressInteractionReader.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/KeypressInteractionReader.cpp > CMakeFiles/a.out.gtest.dir/app/KeypressInteractionReader.cpp.i

CMakeFiles/a.out.gtest.dir/app/KeypressInteractionReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/KeypressInteractionReader.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/KeypressInteractionReader.cpp -o CMakeFiles/a.out.gtest.dir/app/KeypressInteractionReader.cpp.s

CMakeFiles/a.out.gtest.dir/app/NcursesEditorView.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/NcursesEditorView.cpp.o: ../app/NcursesEditorView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building CXX object CMakeFiles/a.out.gtest.dir/app/NcursesEditorView.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/NcursesEditorView.cpp.o -c /home/ics45c/projects/proj4/app/NcursesEditorView.cpp

CMakeFiles/a.out.gtest.dir/app/NcursesEditorView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/NcursesEditorView.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/NcursesEditorView.cpp > CMakeFiles/a.out.gtest.dir/app/NcursesEditorView.cpp.i

CMakeFiles/a.out.gtest.dir/app/NcursesEditorView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/NcursesEditorView.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/NcursesEditorView.cpp -o CMakeFiles/a.out.gtest.dir/app/NcursesEditorView.cpp.s

CMakeFiles/a.out.gtest.dir/app/NcursesKeypressReader.cpp.o: CMakeFiles/a.out.gtest.dir/flags.make
CMakeFiles/a.out.gtest.dir/app/NcursesKeypressReader.cpp.o: ../app/NcursesKeypressReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building CXX object CMakeFiles/a.out.gtest.dir/app/NcursesKeypressReader.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.gtest.dir/app/NcursesKeypressReader.cpp.o -c /home/ics45c/projects/proj4/app/NcursesKeypressReader.cpp

CMakeFiles/a.out.gtest.dir/app/NcursesKeypressReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.gtest.dir/app/NcursesKeypressReader.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ics45c/projects/proj4/app/NcursesKeypressReader.cpp > CMakeFiles/a.out.gtest.dir/app/NcursesKeypressReader.cpp.i

CMakeFiles/a.out.gtest.dir/app/NcursesKeypressReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.gtest.dir/app/NcursesKeypressReader.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ics45c/projects/proj4/app/NcursesKeypressReader.cpp -o CMakeFiles/a.out.gtest.dir/app/NcursesKeypressReader.cpp.s

# Object files for target a.out.gtest
a_out_gtest_OBJECTS = \
"CMakeFiles/a.out.gtest.dir/gtest/BooEditTests.cpp.o" \
"CMakeFiles/a.out.gtest.dir/gtest/MockInteractionReader.cpp.o" \
"CMakeFiles/a.out.gtest.dir/gtest/MockKeypressReader.cpp.o" \
"CMakeFiles/a.out.gtest.dir/gtest/gtestmain.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/BooEdit.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/BooEditLog.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/Command_Backspace.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/Command_DeleteLine.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/Command_End.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/Command_Home.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/Command_MoveDown.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/Command_MoveLeft.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/Command_MoveRight.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/Command_MoveUp.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/Command_NewLine.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/Command_Normal.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/EditorModel.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/InteractionProcessor.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/KeypressInteractionReader.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/NcursesEditorView.cpp.o" \
"CMakeFiles/a.out.gtest.dir/app/NcursesKeypressReader.cpp.o"

# External object files for target a.out.gtest
a_out_gtest_EXTERNAL_OBJECTS =

bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/gtest/BooEditTests.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/gtest/MockInteractionReader.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/gtest/MockKeypressReader.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/gtest/gtestmain.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/BooEdit.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/BooEditLog.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/Command_Backspace.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/Command_DeleteLine.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/Command_End.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/Command_Home.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/Command_MoveDown.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/Command_MoveLeft.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/Command_MoveRight.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/Command_MoveUp.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/Command_NewLine.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/Command_Normal.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/EditorModel.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/InteractionProcessor.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/KeypressInteractionReader.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/NcursesEditorView.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/app/NcursesKeypressReader.cpp.o
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/build.make
bin/a.out.gtest: CMakeFiles/a.out.gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ics45c/projects/proj4/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Linking CXX executable bin/a.out.gtest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a.out.gtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a.out.gtest.dir/build: bin/a.out.gtest

.PHONY : CMakeFiles/a.out.gtest.dir/build

CMakeFiles/a.out.gtest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/a.out.gtest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/a.out.gtest.dir/clean

CMakeFiles/a.out.gtest.dir/depend:
	cd /home/ics45c/projects/proj4/out && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ics45c/projects/proj4 /home/ics45c/projects/proj4 /home/ics45c/projects/proj4/out /home/ics45c/projects/proj4/out /home/ics45c/projects/proj4/out/CMakeFiles/a.out.gtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a.out.gtest.dir/depend
