# Executables / targets to be generated
# Use cp ../chapter3/Makefile . to copy 
all: square_numbers vectors learning_functions reverse_string

# Compilation instructions
square_numbers: square_numbers.cpp
	g++ -std=c++11 square_numbers.cpp -o square_numbers   

vectors: vectors.cpp
	g++ -std=c++11 vectors.cpp -o vectors 

learning_functions: learning_functions.cpp
	g++ function_sign.cpp function_abs.cpp learning_functions.cpp -o learning_functions

reverse_string: reverse_string.cpp
	g++ reverse_string.cpp -o reverse_string



# Cleaning instructions
clean:
	rm square_numbers vectors learning_functions reverse_string