#include<iostream>
using namespace std;
float area(int,float);     //cylinder
float area(float,float);  //triangle
float area(int,int);  //rectangle
float area(int); //circle

int main(){
    int a,b,c,d,e,f;
    float p,q,r,s,t,u;
cout<<"enter the values";
cin>>a>>b>>c>>p>>q>>r;
cout<<"area of circle="<<area(a);
cout<<"area of rectangle="<<area(a,b);
cout<<"area of cylinder="<<area(c,p);
cout<<"area of triangle="<<area(q,r);
return 0;
}

float area(int l){
    return(3.14*l*l);
}

float area(int m, int n){
    return (m*n);
}

float area(int w,float x){
    return (2*3.14*w*x);
}
float area (float i,float j)
{
    return(0.5*i*j);
}
