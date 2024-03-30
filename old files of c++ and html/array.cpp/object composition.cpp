#include<iostream>
using namespace std ;
class A{
    public:
    int a;
    A(){a=0;}
    A(int x){
        cout<<"constructor a"<<endl;
        a=x;
    }
};
class B{
    A obj;
    int b;
    public:
    B(int x): obj(x){//composition
        cout<<"constructor b";
        b=x;
    }
void display(){
    cout<<"data of class A"<<b<<endl;
    cout<<"data of class B"<<obj.a;
}


};
int main()
{
B obj(12);
obj.display();
return 0;
}