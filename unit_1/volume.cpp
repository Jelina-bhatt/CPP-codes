#include <iostream>
#include <conio.h>

float volume(int, float);
float volume(float);
float volume(float, float, float);

int main() {
    float l, b, h, s;
    int r;
    
    std::cout << "Enter length, breadth, height, side, and radius: ";
    std::cin >> l >> b >> h >> s >> r;

    std::cout << "Volume of cylinder = " << volume(r, h) << std::endl;
    std::cout << "Volume of cube = " << volume(s) << std::endl;
    std::cout << "Volume of rectangular box = " << volume(l, b, h) << std::endl;

    getch();  // Wait for a key press
    return 0;
}

float volume(int r, float h) {
    float v = 3.14f * r * r * h;
    return v;
}

float volume(float s) {
    float v = s * s * s;
    return v;
}

float volume(float l, float b, float h) {
    float v = l * b * h;
    return v;
}
