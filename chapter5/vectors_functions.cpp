// Import libraries
#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Function printing elements of a vector
void print_vectors(vector<double> v);

// Function computing inverse elements
vector<double> inverse_vector(vector<double> v);

// Main function
int main() {
    
    // Declare variables
    int n;
    cout << "Enter size of a vector: "; cin >> n;

    // Initialise size and elements from user
    vector<double> vec(n);
    cout << "Enter elements separated by space: " << endl;
    for (int i = 0; i < n; i++) cin >> vec[i];

    // Call function to print elements
    cout << "\nOriginal vector: "; print_vectors(vec);

    // Call function to compute inverse
    auto start = high_resolution_clock::now();
    vector<double> inv_vec = inverse_vector(vec);
    auto end = high_resolution_clock::now();

    // Print results and computation time
    cout << "\nInverse vector: "; print_vectors(inv_vec);
    cout << "Computation time " << duration_cast<nanoseconds>(end - start).count() << " nanoseconds\n";

    // Call function to print and check
    return 0;
}

// Function printing elements of a vector
void print_vectors(vector<double> v){
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << "\n";
}

// Function computing inverse elements
vector<double> inverse_vector(vector<double> v){
    for (int i = 0; i < v.size(); i++){
        if (v[i] == 0) throw runtime_error("\nDivision by zero in inverse_vector");
        v[i] = 1.0 / v[i];
    }
    return v;
}