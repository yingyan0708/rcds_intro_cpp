// Import libraries
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

// Main function
int main() {
    // Declare variables
    ofstream file1;

    // Open file
    file1.open("greetings.txt",ios::app);
    
    // Loop over n and print squares
    for (int i = 0; i < 10; i ++) { // ++i - increase first then execute, i++ - execute then increase
        file1 << pow(i, 2) << "\n";
    }

    // Close file
    file1.close();

    ifstream file2;
    string line;
    file2.open("greetings.txt");
    while(getline(file2, line)){
        cout << line << "\n";
    }

    // Close file
    file2.close();


    
    return 0;
}

