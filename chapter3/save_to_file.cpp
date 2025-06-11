// Import libraries
#include <iostream>
#include <fstream>
using namespace std;

// Main function
int main() {
    // Declare variables
    ofstream file1;

    // Open file and write some message
    file1.open("greetings.txt");
    file1 << "Hello there!" << endl;

    // Close file
    file1.close();

    return 0;

}