# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.26.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.26.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/natalia/Desktop/CPP7_MLP-0/src/MLP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/natalia/Desktop/CPP7_MLP-0/src/build

# Include any dependencies generated for this target.
include CMakeFiles/MLP.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MLP.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MLP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MLP.dir/flags.make

CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.o: CMakeFiles/MLP.dir/flags.make
CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.o: MLP_autogen/mocs_compilation.cpp
CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.o: CMakeFiles/MLP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/natalia/Desktop/CPP7_MLP-0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.o -MF CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.o -c /Users/natalia/Desktop/CPP7_MLP-0/src/build/MLP_autogen/mocs_compilation.cpp

CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/natalia/Desktop/CPP7_MLP-0/src/build/MLP_autogen/mocs_compilation.cpp > CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.i

CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/natalia/Desktop/CPP7_MLP-0/src/build/MLP_autogen/mocs_compilation.cpp -o CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.s

CMakeFiles/MLP.dir/view/main.cpp.o: CMakeFiles/MLP.dir/flags.make
CMakeFiles/MLP.dir/view/main.cpp.o: /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/main.cpp
CMakeFiles/MLP.dir/view/main.cpp.o: CMakeFiles/MLP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/natalia/Desktop/CPP7_MLP-0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MLP.dir/view/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MLP.dir/view/main.cpp.o -MF CMakeFiles/MLP.dir/view/main.cpp.o.d -o CMakeFiles/MLP.dir/view/main.cpp.o -c /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/main.cpp

CMakeFiles/MLP.dir/view/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MLP.dir/view/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/main.cpp > CMakeFiles/MLP.dir/view/main.cpp.i

CMakeFiles/MLP.dir/view/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MLP.dir/view/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/main.cpp -o CMakeFiles/MLP.dir/view/main.cpp.s

CMakeFiles/MLP.dir/view/mainwindow.cpp.o: CMakeFiles/MLP.dir/flags.make
CMakeFiles/MLP.dir/view/mainwindow.cpp.o: /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/mainwindow.cpp
CMakeFiles/MLP.dir/view/mainwindow.cpp.o: CMakeFiles/MLP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/natalia/Desktop/CPP7_MLP-0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MLP.dir/view/mainwindow.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MLP.dir/view/mainwindow.cpp.o -MF CMakeFiles/MLP.dir/view/mainwindow.cpp.o.d -o CMakeFiles/MLP.dir/view/mainwindow.cpp.o -c /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/mainwindow.cpp

CMakeFiles/MLP.dir/view/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MLP.dir/view/mainwindow.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/mainwindow.cpp > CMakeFiles/MLP.dir/view/mainwindow.cpp.i

CMakeFiles/MLP.dir/view/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MLP.dir/view/mainwindow.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/mainwindow.cpp -o CMakeFiles/MLP.dir/view/mainwindow.cpp.s

CMakeFiles/MLP.dir/view/statuswindow.cpp.o: CMakeFiles/MLP.dir/flags.make
CMakeFiles/MLP.dir/view/statuswindow.cpp.o: /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/statuswindow.cpp
CMakeFiles/MLP.dir/view/statuswindow.cpp.o: CMakeFiles/MLP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/natalia/Desktop/CPP7_MLP-0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/MLP.dir/view/statuswindow.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MLP.dir/view/statuswindow.cpp.o -MF CMakeFiles/MLP.dir/view/statuswindow.cpp.o.d -o CMakeFiles/MLP.dir/view/statuswindow.cpp.o -c /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/statuswindow.cpp

CMakeFiles/MLP.dir/view/statuswindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MLP.dir/view/statuswindow.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/statuswindow.cpp > CMakeFiles/MLP.dir/view/statuswindow.cpp.i

CMakeFiles/MLP.dir/view/statuswindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MLP.dir/view/statuswindow.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/statuswindow.cpp -o CMakeFiles/MLP.dir/view/statuswindow.cpp.s

CMakeFiles/MLP.dir/view/paint.cpp.o: CMakeFiles/MLP.dir/flags.make
CMakeFiles/MLP.dir/view/paint.cpp.o: /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/paint.cpp
CMakeFiles/MLP.dir/view/paint.cpp.o: CMakeFiles/MLP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/natalia/Desktop/CPP7_MLP-0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/MLP.dir/view/paint.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MLP.dir/view/paint.cpp.o -MF CMakeFiles/MLP.dir/view/paint.cpp.o.d -o CMakeFiles/MLP.dir/view/paint.cpp.o -c /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/paint.cpp

CMakeFiles/MLP.dir/view/paint.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MLP.dir/view/paint.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/paint.cpp > CMakeFiles/MLP.dir/view/paint.cpp.i

CMakeFiles/MLP.dir/view/paint.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MLP.dir/view/paint.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/paint.cpp -o CMakeFiles/MLP.dir/view/paint.cpp.s

CMakeFiles/MLP.dir/view/trainworker.cpp.o: CMakeFiles/MLP.dir/flags.make
CMakeFiles/MLP.dir/view/trainworker.cpp.o: /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/trainworker.cpp
CMakeFiles/MLP.dir/view/trainworker.cpp.o: CMakeFiles/MLP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/natalia/Desktop/CPP7_MLP-0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/MLP.dir/view/trainworker.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MLP.dir/view/trainworker.cpp.o -MF CMakeFiles/MLP.dir/view/trainworker.cpp.o.d -o CMakeFiles/MLP.dir/view/trainworker.cpp.o -c /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/trainworker.cpp

CMakeFiles/MLP.dir/view/trainworker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MLP.dir/view/trainworker.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/trainworker.cpp > CMakeFiles/MLP.dir/view/trainworker.cpp.i

CMakeFiles/MLP.dir/view/trainworker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MLP.dir/view/trainworker.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/trainworker.cpp -o CMakeFiles/MLP.dir/view/trainworker.cpp.s

CMakeFiles/MLP.dir/view/experimentInfo.cpp.o: CMakeFiles/MLP.dir/flags.make
CMakeFiles/MLP.dir/view/experimentInfo.cpp.o: /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/experimentInfo.cpp
CMakeFiles/MLP.dir/view/experimentInfo.cpp.o: CMakeFiles/MLP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/natalia/Desktop/CPP7_MLP-0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/MLP.dir/view/experimentInfo.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MLP.dir/view/experimentInfo.cpp.o -MF CMakeFiles/MLP.dir/view/experimentInfo.cpp.o.d -o CMakeFiles/MLP.dir/view/experimentInfo.cpp.o -c /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/experimentInfo.cpp

CMakeFiles/MLP.dir/view/experimentInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MLP.dir/view/experimentInfo.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/experimentInfo.cpp > CMakeFiles/MLP.dir/view/experimentInfo.cpp.i

CMakeFiles/MLP.dir/view/experimentInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MLP.dir/view/experimentInfo.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/view/experimentInfo.cpp -o CMakeFiles/MLP.dir/view/experimentInfo.cpp.s

CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.o: CMakeFiles/MLP.dir/flags.make
CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.o: /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/MlpMatrixModel.cpp
CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.o: CMakeFiles/MLP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/natalia/Desktop/CPP7_MLP-0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.o -MF CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.o.d -o CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.o -c /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/MlpMatrixModel.cpp

CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/MlpMatrixModel.cpp > CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.i

CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/MlpMatrixModel.cpp -o CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.s

CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.o: CMakeFiles/MLP.dir/flags.make
CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.o: /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/MlpGraphModel.cpp
CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.o: CMakeFiles/MLP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/natalia/Desktop/CPP7_MLP-0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.o -MF CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.o.d -o CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.o -c /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/MlpGraphModel.cpp

CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/MlpGraphModel.cpp > CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.i

CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/MlpGraphModel.cpp -o CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.s

CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.o: CMakeFiles/MLP.dir/flags.make
CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.o: /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/metrics.cpp
CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.o: CMakeFiles/MLP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/natalia/Desktop/CPP7_MLP-0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.o -MF CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.o.d -o CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.o -c /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/metrics.cpp

CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/metrics.cpp > CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.i

CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/metrics.cpp -o CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.s

CMakeFiles/MLP.dir/controller/controller.cpp.o: CMakeFiles/MLP.dir/flags.make
CMakeFiles/MLP.dir/controller/controller.cpp.o: /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/controller/controller.cpp
CMakeFiles/MLP.dir/controller/controller.cpp.o: CMakeFiles/MLP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/natalia/Desktop/CPP7_MLP-0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/MLP.dir/controller/controller.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MLP.dir/controller/controller.cpp.o -MF CMakeFiles/MLP.dir/controller/controller.cpp.o.d -o CMakeFiles/MLP.dir/controller/controller.cpp.o -c /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/controller/controller.cpp

CMakeFiles/MLP.dir/controller/controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MLP.dir/controller/controller.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/controller/controller.cpp > CMakeFiles/MLP.dir/controller/controller.cpp.i

CMakeFiles/MLP.dir/controller/controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MLP.dir/controller/controller.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/controller/controller.cpp -o CMakeFiles/MLP.dir/controller/controller.cpp.s

CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.o: CMakeFiles/MLP.dir/flags.make
CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.o: /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/ImageEmnist.cpp
CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.o: CMakeFiles/MLP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/natalia/Desktop/CPP7_MLP-0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.o -MF CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.o.d -o CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.o -c /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/ImageEmnist.cpp

CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/ImageEmnist.cpp > CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.i

CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/natalia/Desktop/CPP7_MLP-0/src/MLP/neuralnetwork/ImageEmnist.cpp -o CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.s

# Object files for target MLP
MLP_OBJECTS = \
"CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/MLP.dir/view/main.cpp.o" \
"CMakeFiles/MLP.dir/view/mainwindow.cpp.o" \
"CMakeFiles/MLP.dir/view/statuswindow.cpp.o" \
"CMakeFiles/MLP.dir/view/paint.cpp.o" \
"CMakeFiles/MLP.dir/view/trainworker.cpp.o" \
"CMakeFiles/MLP.dir/view/experimentInfo.cpp.o" \
"CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.o" \
"CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.o" \
"CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.o" \
"CMakeFiles/MLP.dir/controller/controller.cpp.o" \
"CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.o"

# External object files for target MLP
MLP_EXTERNAL_OBJECTS =

MLP.app/Contents/MacOS/MLP: CMakeFiles/MLP.dir/MLP_autogen/mocs_compilation.cpp.o
MLP.app/Contents/MacOS/MLP: CMakeFiles/MLP.dir/view/main.cpp.o
MLP.app/Contents/MacOS/MLP: CMakeFiles/MLP.dir/view/mainwindow.cpp.o
MLP.app/Contents/MacOS/MLP: CMakeFiles/MLP.dir/view/statuswindow.cpp.o
MLP.app/Contents/MacOS/MLP: CMakeFiles/MLP.dir/view/paint.cpp.o
MLP.app/Contents/MacOS/MLP: CMakeFiles/MLP.dir/view/trainworker.cpp.o
MLP.app/Contents/MacOS/MLP: CMakeFiles/MLP.dir/view/experimentInfo.cpp.o
MLP.app/Contents/MacOS/MLP: CMakeFiles/MLP.dir/neuralnetwork/MlpMatrixModel.cpp.o
MLP.app/Contents/MacOS/MLP: CMakeFiles/MLP.dir/neuralnetwork/MlpGraphModel.cpp.o
MLP.app/Contents/MacOS/MLP: CMakeFiles/MLP.dir/neuralnetwork/metrics.cpp.o
MLP.app/Contents/MacOS/MLP: CMakeFiles/MLP.dir/controller/controller.cpp.o
MLP.app/Contents/MacOS/MLP: CMakeFiles/MLP.dir/neuralnetwork/ImageEmnist.cpp.o
MLP.app/Contents/MacOS/MLP: CMakeFiles/MLP.dir/build.make
MLP.app/Contents/MacOS/MLP: /usr/local/lib/QtWidgets.framework/Versions/A/QtWidgets
MLP.app/Contents/MacOS/MLP: /usr/local/lib/QtConcurrent.framework/Versions/A/QtConcurrent
MLP.app/Contents/MacOS/MLP: /usr/local/lib/QtGui.framework/Versions/A/QtGui
MLP.app/Contents/MacOS/MLP: /usr/local/lib/QtCore.framework/Versions/A/QtCore
MLP.app/Contents/MacOS/MLP: CMakeFiles/MLP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/natalia/Desktop/CPP7_MLP-0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable MLP.app/Contents/MacOS/MLP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MLP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MLP.dir/build: MLP.app/Contents/MacOS/MLP
.PHONY : CMakeFiles/MLP.dir/build

CMakeFiles/MLP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MLP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MLP.dir/clean

CMakeFiles/MLP.dir/depend:
	cd /Users/natalia/Desktop/CPP7_MLP-0/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/natalia/Desktop/CPP7_MLP-0/src/MLP /Users/natalia/Desktop/CPP7_MLP-0/src/MLP /Users/natalia/Desktop/CPP7_MLP-0/src/build /Users/natalia/Desktop/CPP7_MLP-0/src/build /Users/natalia/Desktop/CPP7_MLP-0/src/build/CMakeFiles/MLP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MLP.dir/depend

