// Import libraries
#include <iostream>
#include <cmath>
using namespace std;

// Main function
int main() {
    // Declare variables
    int n = 10;

    // Loop over n and print squares
    cout << "Loop with for\n";
    for (int i = 0; i < n; i ++) { // ++i - increase first then execute, i++ - execute then increase
        cout  << "i: " << i << ", i^2: " << pow(i, 2) << endl;
    }

    // Start again
    int i = 3;

    
    // Loop over n and print cubes
    cout << "Loop with while\n";
    while (i < n){
        cout  << "i: " << i << ", i^3: " << pow(i, 3) << endl;
        ++i
    }
    return 0;
}

