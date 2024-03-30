#include<iostream>
using namespace std;
class base
{
    int a,b;
    public:
    base()
    {
        a=0;
        b=0;
    }
    base(int x,int y)
    {
        a=x;
        b=y;

    }
    void get_data()
    {
        cin>>a;
        cin>>b;
    }
    void display()
    {
        cout<<"Value of a:"<<a<<endl;
        cout<<"Value of b:"<<b<<endl;

    }
    ~base()
    {
    }
    

};
int main()
{
    base obj_1;
    obj_1.display();
    return 0;
}