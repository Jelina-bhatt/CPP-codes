#include <iostream>

class Rectangle {
public:
    int width, height;

    int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    rect.width = 5;
    rect.height = 3;
    std::cout << "Area: " << rect.area() << std::endl;
    return 0;
}
