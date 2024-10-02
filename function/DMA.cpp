#include<iostream>
using namespace std;
int main(){
    int *p,*q,*sum;
    p=new int;
    q=new int;
    sum=new int;
    cout<<"enter the values of p and q";
    cin>>*p>>*q;
    *sum=*p+*q;
    cout<<"the sum is ="<<*sum;
    delete p;
    delete q;
    delete sum;
    return 0;

}