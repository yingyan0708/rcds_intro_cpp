// Import libraries
#include <iostream>
using namespace std;

// Main function
int main(){
    // Print some message
    cout << "Hello world!" << endl; //if not use namespace, need to put std::cout and std::endl
    cout << "Learning how to compile" << endl;
    
    // Declare variables
    double x;  
    // or write int x = 4 for integer, need to tell the type of the variable first
    // Assign value
    x = 10.1;

    double y; // for float
    y = 4.4;

    double sum, diff, prod, ratio;
    sum = x + y;
    diff = x - y;
    prod = x * y;
    ratio = x / y;

    // Print on screen
    cout << "x + y = " << sum << endl;
    cout << "x - y = " << diff << endl;
    cout << "x * y = " << prod << endl;
    cout << "x / y = " << ratio << endl;


    return 0;
}
