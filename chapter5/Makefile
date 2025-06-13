# Declare specific compiler
CXX=g++
FLAGS=-std=c++11 -Wall #-Wall will not allow unused defined variables

# Executables / targets to be generated
all: vectors_functions pointers vectors_pointers rectangles

# Compilation instructions
vectors_functions: vectors_functions.cpp
	$(CXX) $(FLAGS) $< -o $@

# Compilation instructions
pointers: pointers.cpp
	$(CXX) $(FLAGS) $< -o $@

vectors_pointers: vectors_pointers.cpp
	$(CXX) $(FLAGS) $< -o $@

rectangles: rectangles.cpp
	$(CXX) $(FLAGS) $< -o $@

# Cleaning instuction
clean:
	rm -r $@
	rm -r $@
	rm -r $@
	rm -r $@
	