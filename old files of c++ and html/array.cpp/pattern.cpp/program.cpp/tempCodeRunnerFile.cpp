#include<iostream>
using namespace std;
template<class T,class T1,class T2,class T3>
class template_class
{
    public:
    T a;
    T1 b;
    T2 c;
    T3 d;
  //  void get_data()
   // {
   //  a=2;
   //  b=3;
    // c=5;
    // d=8;

  //  }
    template_class()
    {
        a=1;
        b=2.0;
        c='h';
        d=5999999;
    }
    void display()
    {
        cout<<"value of a:"<<a;
        cout<<"\n value of b:"<<b;
        cout<<"\n value of c:"<<c;
        cout<<"\n value of d:"<<d;

    }
};
int main()
{
    template_class<int,float, char,long> obj_1;
    obj_1.display();
    
   
    return 0;
    }