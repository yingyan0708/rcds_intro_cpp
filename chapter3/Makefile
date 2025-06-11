# Executables / targets to be generated
all: square_numbers save_to_file read_from_file save_file_square_numbers

# Compilation instructions
square_numbers: square_numbers.cpp
	g++ square_numbers.cpp -o square_numbers

save_to_file: save_to_file.cpp
	g++ save_to_file.cpp -o save_to_file

read_from_file: read_from_file.cpp
	g++ read_from_file.cpp -o read_from_file

save_file_square_numbers: save_file_square_numbers.cpp
	g++ save_file_square_numbers.cpp -o save_file_square_numbers

# Cleaning instructions
clean:
	rm square_numbers save_to_file read_from_file save_file_square_numbers