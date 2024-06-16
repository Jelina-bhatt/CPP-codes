#include<iostream>
using namespace std;
int sum(int,int);
int main(){
    int a,b,c;
    cout<<"enter the value of x and y";
    cin>>a>>b;
    c=sum(a,b);
    cout<<c;
    return 0;
}
int sum(int x,int y){
    int s;
    s=x+y;
    return s;
}