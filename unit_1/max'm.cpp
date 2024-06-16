#include<iostream>
using namespace std;

int max(int, int, int);

int main(){
    int x, y, z,c;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    c=max(x, y, z);
    cout << "Max = " << c << endl;
    return 0;
}

int max(int a, int b, int c) {
    if (a >b && a > c) {
        return a;
    } else if (b > a && b >c) {
        return b;
    } else {
        return c;
    }
}