#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    // Constructor
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // Function to calculate area
    int area() {
        return width * height;
    }
};

int main() {
    // Creating an object of Rectangle
    Rectangle rect(10, 5);

    // Displaying the area of the rectangle
    cout << "Area of rectangle: " << rect.area() << endl;

    return 0;
}
