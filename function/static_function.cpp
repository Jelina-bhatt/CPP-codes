#include<iostream>
using namespace std;
class BCT
{
private:
int code;
static int count;
public:
   void setcode(){
    count++;
    code=count;
   }
void showcode(){
    cout<<"student code="<<code<<"/BCT/080"<<endl;
}
static void showcount(){
    cout<<"records of"<<count<<"students found"<<endl;

   }
};
int BCT::count=0;
 
 int main(){
    BCT s1,s2;
    s1.setcode();
    s2.setcode();
    BCT::showcount();
    BCT s3;
    s3.setcode();
     BCT::showcount();
s1.showcode();
s2.showcode();
s3.showcode();
return 0;
 }
 
