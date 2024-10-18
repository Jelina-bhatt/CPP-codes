// C++ program to demonstrate the use of defaulted constructor

#include <iostream>
using namespace std;

// declare a class
class  Wall {
  private:
    double length {5.5};

  public:
    // defaulted constructor to initialize variable
    Wall() = default;
    
    void print_length() {
    	cout << "length = " << length << endl;
    }
};

int main() {
  Wall wall1;
  wall1.print_length();
  return 0;
}