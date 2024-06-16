#include<iostream>
using namespace std;
int &max(int &x,int &y);
int main(){
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
     cout << "Before calling function: a = " << a << " and b = " << b << endl;
    max(a, b) = 100;
    cout << "After calling function: a = " << a << " and b = " << b << endl;
    return 0;
}
int &max(int &x,int &y){
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
    
}