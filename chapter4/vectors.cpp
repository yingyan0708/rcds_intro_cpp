// Import libraries
#include <iostream>
#include <vector>
using namespace std;

// Main function
int main() {
    
    // Declare variables
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> vec = {1, 2, 3, 4, 5};

    // Access elements
    cout << "\nArray elements: ";
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    // Access vector elements
    cout << "\nVector elements: ";
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

    // Add elements to vector
    vec.push_back(6);
    cout << "\nVector elements after appending: ";
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

    // Remove element from vector
    vec.pop_back();
    cout << "\nVector elements after removing: ";
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << "\n";

    return 0;
}