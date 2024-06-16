#include<iostream>
using namespace std;
class student
{
private:
   int roll_no;
public:
   void enter(){
    cout<<"enter roll no";
    cin>>roll_no;
   }
   void display(){
    cout<<"Roll no"<<roll_no;
   }
};

int main(){
   
    student a;
    a.enter();
    a.display();
    return 0;
}
