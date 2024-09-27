#include<iostream>
using namespace std;
class constructor
{
private:
   int a,b;
public:
  constructor(); //default constructor
  constructor (int,int); //parameterized constructor
  void display(){
    cout<<a<<"      "<<b;
  }
};

constructor::constructor()
{
    a=0;
    b=0;
}

constructor::constructor(int x,int y)
{
    a=x;
    b=y;
}
int main(){
    constructor c1,c2; //default constructor
    constructor c3(5,7),c4(4,9);
    c1.display();
     c2.display();
      c3.display();
       c4.display();
       return 0;
   
}