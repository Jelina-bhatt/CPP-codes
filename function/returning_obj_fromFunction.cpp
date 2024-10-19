#include<iostream>
using namespace std;
class coordinate{
    int x,y;
    public: void input(){
        cout<<"enter the values of x and y";
        cin>>x>>y;
    }
    void display(){
        cout<<x<<y;
    }
    friend coordinate sum(coordinate a, coordinate b){
        coordinate z;
        z.x=a.x+b.x;
        z.y=a.y+b.y;
        return(z);

    }
};
int main(){
    coordinate i,j,k;
    i.input();
    j.input();
    k=sum(i,j);
    i.display();
    j.display();
     k.display();
     return 0;
}