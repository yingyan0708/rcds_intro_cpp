// Import libraries
#include <iostream>
using namespace std;

// Function reversing characters of string
string reverse_string(string input) {
    // Declare variabless
    string reversed = "";
    for (int i = input.length(); i >= 0; i--){
        // Store individual character
        char c = input[i];

        // Capture vowels and make them upper case
        switch (c) {
            case 'a': reversed += 'A'; break;
            case 'e': reversed += 'E'; break;
            case 'i': reversed += 'I'; break;
            case 'o': reversed += 'O'; break;
            case 'u': reversed += 'U'; break;
            default: reversed += c;
        }

    }
    return reversed;

}
// Main function
int main() {
    // Declare variables
    string original, reversed;
    // Ask user to input string
    cout << "Enter a string: "; 
    //cin >> original;
    getline(cin, original); // capture full string with spaces

    // Call function reversing string and print result
    cout << "Reversed string: " << reverse_string(original) << endl;

    return 0;
}