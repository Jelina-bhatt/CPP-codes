#include <iostream>

class Point {
private:
    int x, y;

public:
    // Constructor
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload unary minus (-) operator
    Point operator-() const {
        return Point(-x, -y);
    }

    // Function to display the point
    void display() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p1(3, 4);

    std::cout << "Original Point: ";
    p1.display();

    // Use the overloaded unary minus operator
    Point p2 = -p1;

    std::cout << "Negated Point: ";
    p2.display();

    return 0;
}
