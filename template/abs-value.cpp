#include<iostream>
using namespace std;
template<class T>
T abs(T n){
    if (n<0)
    {
        return(-n);
    }
    else
    {
        return(n);
    }
    
}
int main(){
    int a=-4;
    float b=9.00;
    cout<<"the absoulte value of a"<<abs(a)<<endl;
    cout<<"the absolute value of b"<<abs(b)<<endl;
    return 0;
}