// Include libraries
#include <iostream>
using namespace std;

// Main function
int main() {

    // Declare variables
    int x = 10;
    int* p; // or int *p
    p = &x;

    // Check value and memory address
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of p: " << p << endl;
    cout << "Value stored at *p: " << *p << endl;

    return 0;
}