#include<iostream>
using namespace std;
class base
{public:
    int a=4;
    
    virtual void display(){
        cout<<" 1Value of a:"<<a<<endl;

    }

};
class derived:public base
{public:
    int b=7;
    public:
    void display()
    {
        cout<<"2value of a :"<<a<<endl;
        cout<<"3value of b:"<<b<<endl;

    }
};
int main()
{
    base obj_1;
    base *ptr=&obj_1;
    //ptr->display();
    derived obj_2;
    
    ptr=&obj_2;
    ptr->display();
    return 0;

}