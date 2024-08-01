#include<iostream>
using namespace std;
  
  inline int add(int x, int y);
inline int divide(int x, int y);

int main(){
int a=15;
int b=5;
cout<<add(a,b)<<"\n";
cout<<divide(a,b)<<"\n";
return 0;
}
 inline int add(int x,int y){
        return x+y;
}

inline int divide(int x,int y){
        return x/y;
}