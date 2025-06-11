#include <iostream>
using namespace std;

int function_sign(int n) {
    // Declare variables
    int sign;

    // Compute sign
    if (n > 0) {
        sign = 1;
    }
    else if (n == 0) {
        sign = 0;
    }
    else {
        sign = -1;
    }
    return sign;
}
