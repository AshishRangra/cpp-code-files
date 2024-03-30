#include<iostream>
using namespace std ;
class A{
   
    public:
     int a;
    A(){
        a=12;
    }
};
class B:public virtual A{

};
class C:public virtual B{

};
class D:public B,public C{
public:
void display(){
    cout<<"value of a:"<<a;
}
};
int main()
{
D obj;
obj.display();
return 0;
}