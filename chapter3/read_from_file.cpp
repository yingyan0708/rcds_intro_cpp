// Import libraries
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Declare variabless
int main() {
    //Declare variables
    ifstream file1;
    string line;

    // Open file and read lines
    file1.open("greetings.txt");
    while(getline(file1, line)){
        cout << line << endl;
    }

    // Close file
    file1.close();

    return 0;
}
