#include <iostream>
using namespace std;

class Student
{
    int id;
    public:
    Student(int a):id(a)
    {}
    Student (Student &s)
    {
        id=s.id;
    }
    int display()
    {
        return id;
    }
};

int main() {
    Student s1(10);
    Student s2(s1); //s2=s1;
    Student s3=s2;
    Student s4=s1;
    cout << "This Is  A Simple Example of Copy Constructor in C++" << endl;
    cout << "--------------------------------------------------------" << endl;

    cout <<"Id of student s1="<<s1.display();
    cout <<"\nId of student s2="<<s2.display();
    cout <<"\nId of student s3="<<s3.display();
    cout <<"\nId of student s4="<<s4.display();
    return 0;

    return 0;
}