#include<iostream>
using namespace std;
class X
{
    int x;
    public:
    void set_data(int x)
    {
       this-> x=x;

    }
    void display()
    {
        cout<<"value of x:"<<x;

    }
};
int main()
{
    X a;
    a.set_data(2);
    a.display();
    return 0;


}