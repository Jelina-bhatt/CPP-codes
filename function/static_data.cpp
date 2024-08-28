#include<iostream>
using namespace std;
class static_item
{
private:
    static int count;
    float price;
public:
   void get_data(float a){
    price=a;
    count++;
   }
    static void show_count(){
        cout<<"count="<<count<<endl;
    }
};
int static_item::count;

int main(){
    static_item a1,a2,a3;
    a1.show_count();
    a2.show_count();
    a3.show_count();
    a1.get_data(50.5);
    a2.get_data(80.5);
    a3.get_data(60.5);
cout<<"after reading data"<<endl;
 a1.show_count();
    a2.show_count();
    a3.show_count();
    return 0;
}
