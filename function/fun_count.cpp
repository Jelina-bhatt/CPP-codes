#include<iostream>
using namespace std;

void fun(int count) {
    if (count == 0) {
        cout << count << endl;
    } else {
        cout << count << endl;
        fun(--count);
    }
}

int main() {
    fun(5);
    return 0;
}
