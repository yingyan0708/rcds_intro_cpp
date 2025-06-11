// Import libraries
#include <iostream>
using namespace std;


// Function computing sign
int function_sign(int n);
//Function abs sign
int function_abs(int n);

// Main function
int main() {
    // Declare variables
    int n;
    
    // Assign value
    cout << "Enter an integer number: "; cin >> n;

    // Call function
    cout << "Sign: " << function_sign(n) << endl;
    cout << "Absolute value: " << function_abs(n) << endl;

    return 0;
}