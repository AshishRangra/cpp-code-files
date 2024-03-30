#include<iostream>
using namespace std;
template<class E,class E1,class E2>
class Ashish
{
  E a;
  E1 b;
  E2 c;
  public:
  Ashish(E x,E1 y,E2 z)
  {
      a=x;
      b=y;
      c=z;
  }
  void display()
  {
       cout<<"Value of a:"<<a<<endl;
       cout<<"Value of b:"<<b<<endl;
       cout<<"value of c:"<<c<<endl;


  }

};
int main()
{
    Ashish<int ,float,char> A(12,2.34,'s');
    A.display();
    return 0;
}

