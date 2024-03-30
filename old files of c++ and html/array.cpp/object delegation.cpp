#include<iostream>
using namespace std ;
class A{//delegation
    public:
    void display(){
        cout<<"class A"<<endl;

    }
};
class B{
    A obj;
    public:
    void display(){
        obj.display();
    }
};
int main()
{
B obj_1;
obj_1.display();
return 0;
}