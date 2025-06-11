// Include libraries
#include <iostream>
#include <cmath>
using namespace std;

// Main function
int main() {
    // Declare variables
    int n = 10;
    int square_numbers[n];

    // Iterate and store values as elements of the array
    for (int i = 0; i < n; i++){
        square_numbers[i] = pow(i, 2);
    }

    // Iterate and print elements of the array
    for (int i = 0; i < n; i++){
        cout << square_numbers[i] << endl;
    }
    
    return 0;
}