# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/karla/Descargas/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/karla/Descargas/clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/karla/CLionProjects/Ordenamiento

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/karla/CLionProjects/Ordenamiento/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Ordenamiento.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ordenamiento.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ordenamiento.dir/flags.make

CMakeFiles/Ordenamiento.dir/main.cpp.o: CMakeFiles/Ordenamiento.dir/flags.make
CMakeFiles/Ordenamiento.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/karla/CLionProjects/Ordenamiento/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ordenamiento.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ordenamiento.dir/main.cpp.o -c /home/karla/CLionProjects/Ordenamiento/main.cpp

CMakeFiles/Ordenamiento.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ordenamiento.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karla/CLionProjects/Ordenamiento/main.cpp > CMakeFiles/Ordenamiento.dir/main.cpp.i

CMakeFiles/Ordenamiento.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ordenamiento.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karla/CLionProjects/Ordenamiento/main.cpp -o CMakeFiles/Ordenamiento.dir/main.cpp.s

CMakeFiles/Ordenamiento.dir/LinkedList/LinkedList.cpp.o: CMakeFiles/Ordenamiento.dir/flags.make
CMakeFiles/Ordenamiento.dir/LinkedList/LinkedList.cpp.o: ../LinkedList/LinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/karla/CLionProjects/Ordenamiento/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Ordenamiento.dir/LinkedList/LinkedList.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ordenamiento.dir/LinkedList/LinkedList.cpp.o -c /home/karla/CLionProjects/Ordenamiento/LinkedList/LinkedList.cpp

CMakeFiles/Ordenamiento.dir/LinkedList/LinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ordenamiento.dir/LinkedList/LinkedList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karla/CLionProjects/Ordenamiento/LinkedList/LinkedList.cpp > CMakeFiles/Ordenamiento.dir/LinkedList/LinkedList.cpp.i

CMakeFiles/Ordenamiento.dir/LinkedList/LinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ordenamiento.dir/LinkedList/LinkedList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karla/CLionProjects/Ordenamiento/LinkedList/LinkedList.cpp -o CMakeFiles/Ordenamiento.dir/LinkedList/LinkedList.cpp.s

CMakeFiles/Ordenamiento.dir/LinkedList/Node/Node.cpp.o: CMakeFiles/Ordenamiento.dir/flags.make
CMakeFiles/Ordenamiento.dir/LinkedList/Node/Node.cpp.o: ../LinkedList/Node/Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/karla/CLionProjects/Ordenamiento/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Ordenamiento.dir/LinkedList/Node/Node.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ordenamiento.dir/LinkedList/Node/Node.cpp.o -c /home/karla/CLionProjects/Ordenamiento/LinkedList/Node/Node.cpp

CMakeFiles/Ordenamiento.dir/LinkedList/Node/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ordenamiento.dir/LinkedList/Node/Node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karla/CLionProjects/Ordenamiento/LinkedList/Node/Node.cpp > CMakeFiles/Ordenamiento.dir/LinkedList/Node/Node.cpp.i

CMakeFiles/Ordenamiento.dir/LinkedList/Node/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ordenamiento.dir/LinkedList/Node/Node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karla/CLionProjects/Ordenamiento/LinkedList/Node/Node.cpp -o CMakeFiles/Ordenamiento.dir/LinkedList/Node/Node.cpp.s

CMakeFiles/Ordenamiento.dir/InsertionSort/InsertionSort.cpp.o: CMakeFiles/Ordenamiento.dir/flags.make
CMakeFiles/Ordenamiento.dir/InsertionSort/InsertionSort.cpp.o: ../InsertionSort/InsertionSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/karla/CLionProjects/Ordenamiento/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Ordenamiento.dir/InsertionSort/InsertionSort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ordenamiento.dir/InsertionSort/InsertionSort.cpp.o -c /home/karla/CLionProjects/Ordenamiento/InsertionSort/InsertionSort.cpp

CMakeFiles/Ordenamiento.dir/InsertionSort/InsertionSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ordenamiento.dir/InsertionSort/InsertionSort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karla/CLionProjects/Ordenamiento/InsertionSort/InsertionSort.cpp > CMakeFiles/Ordenamiento.dir/InsertionSort/InsertionSort.cpp.i

CMakeFiles/Ordenamiento.dir/InsertionSort/InsertionSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ordenamiento.dir/InsertionSort/InsertionSort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karla/CLionProjects/Ordenamiento/InsertionSort/InsertionSort.cpp -o CMakeFiles/Ordenamiento.dir/InsertionSort/InsertionSort.cpp.s

CMakeFiles/Ordenamiento.dir/QuickSort/QuickSort.cpp.o: CMakeFiles/Ordenamiento.dir/flags.make
CMakeFiles/Ordenamiento.dir/QuickSort/QuickSort.cpp.o: ../QuickSort/QuickSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/karla/CLionProjects/Ordenamiento/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Ordenamiento.dir/QuickSort/QuickSort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ordenamiento.dir/QuickSort/QuickSort.cpp.o -c /home/karla/CLionProjects/Ordenamiento/QuickSort/QuickSort.cpp

CMakeFiles/Ordenamiento.dir/QuickSort/QuickSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ordenamiento.dir/QuickSort/QuickSort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karla/CLionProjects/Ordenamiento/QuickSort/QuickSort.cpp > CMakeFiles/Ordenamiento.dir/QuickSort/QuickSort.cpp.i

CMakeFiles/Ordenamiento.dir/QuickSort/QuickSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ordenamiento.dir/QuickSort/QuickSort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karla/CLionProjects/Ordenamiento/QuickSort/QuickSort.cpp -o CMakeFiles/Ordenamiento.dir/QuickSort/QuickSort.cpp.s

CMakeFiles/Ordenamiento.dir/BubbleSort/BubbleSort.cpp.o: CMakeFiles/Ordenamiento.dir/flags.make
CMakeFiles/Ordenamiento.dir/BubbleSort/BubbleSort.cpp.o: ../BubbleSort/BubbleSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/karla/CLionProjects/Ordenamiento/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Ordenamiento.dir/BubbleSort/BubbleSort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ordenamiento.dir/BubbleSort/BubbleSort.cpp.o -c /home/karla/CLionProjects/Ordenamiento/BubbleSort/BubbleSort.cpp

CMakeFiles/Ordenamiento.dir/BubbleSort/BubbleSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ordenamiento.dir/BubbleSort/BubbleSort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karla/CLionProjects/Ordenamiento/BubbleSort/BubbleSort.cpp > CMakeFiles/Ordenamiento.dir/BubbleSort/BubbleSort.cpp.i

CMakeFiles/Ordenamiento.dir/BubbleSort/BubbleSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ordenamiento.dir/BubbleSort/BubbleSort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karla/CLionProjects/Ordenamiento/BubbleSort/BubbleSort.cpp -o CMakeFiles/Ordenamiento.dir/BubbleSort/BubbleSort.cpp.s

# Object files for target Ordenamiento
Ordenamiento_OBJECTS = \
"CMakeFiles/Ordenamiento.dir/main.cpp.o" \
"CMakeFiles/Ordenamiento.dir/LinkedList/LinkedList.cpp.o" \
"CMakeFiles/Ordenamiento.dir/LinkedList/Node/Node.cpp.o" \
"CMakeFiles/Ordenamiento.dir/InsertionSort/InsertionSort.cpp.o" \
"CMakeFiles/Ordenamiento.dir/QuickSort/QuickSort.cpp.o" \
"CMakeFiles/Ordenamiento.dir/BubbleSort/BubbleSort.cpp.o"

# External object files for target Ordenamiento
Ordenamiento_EXTERNAL_OBJECTS =

Ordenamiento: CMakeFiles/Ordenamiento.dir/main.cpp.o
Ordenamiento: CMakeFiles/Ordenamiento.dir/LinkedList/LinkedList.cpp.o
Ordenamiento: CMakeFiles/Ordenamiento.dir/LinkedList/Node/Node.cpp.o
Ordenamiento: CMakeFiles/Ordenamiento.dir/InsertionSort/InsertionSort.cpp.o
Ordenamiento: CMakeFiles/Ordenamiento.dir/QuickSort/QuickSort.cpp.o
Ordenamiento: CMakeFiles/Ordenamiento.dir/BubbleSort/BubbleSort.cpp.o
Ordenamiento: CMakeFiles/Ordenamiento.dir/build.make
Ordenamiento: CMakeFiles/Ordenamiento.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/karla/CLionProjects/Ordenamiento/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable Ordenamiento"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ordenamiento.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ordenamiento.dir/build: Ordenamiento

.PHONY : CMakeFiles/Ordenamiento.dir/build

CMakeFiles/Ordenamiento.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Ordenamiento.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Ordenamiento.dir/clean

CMakeFiles/Ordenamiento.dir/depend:
	cd /home/karla/CLionProjects/Ordenamiento/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/karla/CLionProjects/Ordenamiento /home/karla/CLionProjects/Ordenamiento /home/karla/CLionProjects/Ordenamiento/cmake-build-debug /home/karla/CLionProjects/Ordenamiento/cmake-build-debug /home/karla/CLionProjects/Ordenamiento/cmake-build-debug/CMakeFiles/Ordenamiento.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ordenamiento.dir/depend

