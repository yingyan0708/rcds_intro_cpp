// Import libraries
#include <iostream>
#include <string> //since we are using string
using namespace std;

int main(){
    // Declare variables
    double height;
    string name;
    
    // Assign values from keyboard
    cout << "What is your name (one word)?:\t";
    cin >> name;
    cout << "What is your height (in m)?" << endl;
    cin >> height;

    // Print result on screen
    cout << name << " is " << height << "m tall\n"; 
    return 0;

}