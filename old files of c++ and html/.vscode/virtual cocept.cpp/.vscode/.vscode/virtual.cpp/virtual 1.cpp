#include<iostream>
using namespace std;
class A
{
    public:
    int a;
 
};
class B:public A
{
    public:
    int b;
    void show()
    {
        cout<<a<<endl;
        cout<<b;
    }
};
int main()
{
    B obj_1;
   obj_1.b=10;
   obj_1.a=22;
   obj_1.show();
  
    
    
    A obj_2;
    obj_2= obj_1;
   
   // A obj_1=new B;
   // A obj_2;
  //  obj_2=obj_1;
    return 0;
}