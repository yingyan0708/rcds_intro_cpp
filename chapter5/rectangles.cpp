// Import libraries
#include <iostream>
using namespace std;

// Declare an object of the class Rectangle
class Rectangle{
    public: 
        // Variables / attributes characteristics of any rectangle
        double height;
        double width;
        // Function / methods characteristics of any reactangle
        void set_dimension(double x, double y){ // void set_dimension(double, double);
            width = x;
            height = y;
        }
        double area() {
            return height * width;
        };
        
}; // class is not a function need to close with ;

// void Rectangle::set_dimensions (double x, double y){
//    height = x;
//    width = y; 
//}

// Declare object inheriting from Rectangle
class Square : public Rectangle{
    public:
        // Constructor ensuring height and width
        Square(double side){
            set_dimension(side,side);
        }
};

// Main function
int main(){
    
    // Declare / instantiate a particular case of the object rectangle
    Rectangle Rec1;
    Rectangle Rec2;
    Square Sq1(4.0);

    // Specify the values of Rec1
    Rec1.set_dimension(5.0, 6.0);

    // Specify values of Rec2
    Rec2.height = 10.0;
    Rec2.width = 12.0;

    // Compute areas
    cout << "Area of Rec1: " << Rec1.area() << endl;
    cout << "Area of Rec2: " << Rec2.area() << endl;
    cout << "Area of Sq1: " << Sq1.area() << endl;

    return 0;
}