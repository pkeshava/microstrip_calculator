# grabbed from http://stackoverflow.com/questions/6921695/how-can-i-build-a-c-project-with-multiple-interdependent-subdirectories

# Since the directory structure in your project is just there to keep your files organized,
# one approach is to have a CMakeLists.txt that automatically finds
# all sources files in the src directory and also adds all directories as include
# directories that have a header file in them. The following CMake file may serve as a starting point:

cmake_minimum_required (VERSION 3.6)
project (Microstrip)

file(GLOB_RECURSE Microstrip_SOURCES "src/*.cpp")
file(GLOB_RECURSE Microstrip_HEADERS "src/*.h")

set (Microstrip_INCLUDE_DIRS "")
foreach (_headerFile ${Microstrip_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND Microstrip_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES Microstrip_INCLUDE_DIRS)

include_directories(${Microstrip_INCLUDE_DIRS})
add_executable (MicrostripExe ${Microstrip_SOURCES})


# The two file(GLOB_RECURSE ... commands determine the set of source and header files.
# The foreach loop computes the set of include directories from the list of all header files.

# One drawback with computing the set of source files is that
# CMake will not automatically detect when new files are added to your source tree.
# You manually have to re-create your build files then.
