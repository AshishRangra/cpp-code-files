
#include<iostream>
using namespace std;

//pointer in derived class 
class A
{ 
    public:
int a;

void get_a(int x)
{
    a=x;
}
void display()
{
    cout<<"Value of a present in base class : "<<a<<endl;

}
};
class derived: public A
{ 
    public:
    int b;
   
     void get_b(int r)
     {
         b=r;

     }    
     void display(){
         cout<<"Value of a in base class:"<<a<<endl;
         cout<<"Value of b in derived class:"<<b<<endl;

     }

};
int main()
{ 
   
    A obj_1;
   
     A *bptr=&obj_1;
    bptr->get_a(100);
    cout<<"bptr points to base class"<<endl;
    bptr->display();
    derived obj_2;
    bptr->get_a(20);
    cout<<"bptr now points to derived class"<<endl;
    bptr->display();
  
    derived *dptr=&obj_2;
    dptr->get_b(21);
    dptr->get_a(34);
    dptr->display();

    return 0;
}

