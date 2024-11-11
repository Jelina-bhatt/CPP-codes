#include <iostream>
using namespace std;

class time {
private:
    int hours, minutes;
public:
    void get_time(int h, int m) {
        hours = h;
        minutes = m;
    }

    void display() {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }

    void sum(time t1, time t2) {
        minutes = t1.minutes + t2.minutes;
        hours = minutes / 60;
        minutes = minutes % 60;
        hours = hours + t1.hours + t2.hours;
    }
};

int main() {
    time t1, t2, t3;
    t1.get_time(2, 50);
    t2.get_time(1, 40);
    t3.sum(t1, t2);
    t3.display();
}
