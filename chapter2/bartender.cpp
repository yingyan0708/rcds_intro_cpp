// Include libraries
#include <iostream>
#include <string>
using namespace std;

// Main function
int main(){
    // Declare variables
    int age;

    // Assign values
    cout << "Welcome to the pub. Please enter your age: " << endl;
    cin >> age;

    // Print different message depending on input 
    if (age > 18){
        cout << "Have a pint!" << endl;
    } else if (age == 18){
        cout << "Show me your ID and then have a pint!";
    } else{
        cout << "Goodbye!" << endl;
    }

    return 0;
}