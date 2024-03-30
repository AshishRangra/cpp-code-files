#include<iostream>
using namespace std;
class base
{
public:
 void show()
{
    cout<<"1base show "<<endl;
}

 void display()
{
    cout<<"1base display"<<endl;
}
};
class derived :public base
{
public:
void show()
{
    cout<<"2show virtual"<<endl;

}
 void display()
{
    cout<<"2display virtual"<<endl;
}
};
int main()
{
    base a;
    base* ptr=&a;

    ptr->display();
    ptr->show();
    derived b;
    ptr=&b;
    ptr->display();
    ptr->show();
    return 0;
}


