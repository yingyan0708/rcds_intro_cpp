// Import libraries
#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Function printing elements of a vector
void print_vectors(double* v, int size);

// Function computing inverse elements
double* inverse_vector(double* v, int size);

// Main function
int main() {
    
    // Declare variables
    int n;
    cout << "Enter size of a vector: "; cin >> n;

    // Initialise size and elements from user
    double* vec = new double(n);
    cout << "Enter elements separated by space: " << endl;
    for (int i = 0; i < n; i++) cin >> vec[i];

    // Call function to print elements
    cout << "\nOriginal vector: "; print_vectors(vec, n);

    // Call function to compute inverse
    auto start = high_resolution_clock::now();
    double* inv_vec = inverse_vector(vec, n);
    auto end = high_resolution_clock::now();

    // Print results and computation time
    cout << "\nInverse vector: "; print_vectors(inv_vec, n);
    cout << "Size of dynamic vector: " << sizeof(double*) << " bytes\n";
    cout << "Computation time " << duration_cast<nanoseconds>(end - start).count() << " nanoseconds\n";

    // Free allocated memory
    delete[] vec;
    delete[] inv_vec;

    return 0;
}

// Function printing elements of a vector
void print_vectors(double* v, int size){
    for (int i = 0; i < size; i++) cout << v[i] << " ";
    cout << "\n";
}

// Function computing inverse elements
double* inverse_vector(double* v, int size){

    // Allocate new array for inverse
    double* inv = new double(size);

    for (int i = 0; i < size; i++){
        if (v[i] == 0) throw runtime_error("\nDivision by zero in inverse_vector");
        inv[i] = 1.0 / v[i];
    }
    return inv;
}