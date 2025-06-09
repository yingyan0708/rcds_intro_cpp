// Import libraries
#include <iostream>
#include <string>
#include <cmath> // for mathematical operation
using namespace std;

// Main function
int main(){

    // Declare two numbers
    double x, y;
    // Assign values
    cout << "Enter two numbers separated by space: ";
    cin >> x;
    cin >> y;

    // Print values
    cout << "x: " << x << "\ny: " << y << endl;

    // Some mathematical calculation
    cout << "x squared: " << pow(x,2) << endl;
    cout << "y cubed: " << pow(y,3) << endl;
    cout << "sqrt(x): " << sqrt(x) << endl;
    cout << "sin(y): " << sin(y) << endl;

    return 0;
}