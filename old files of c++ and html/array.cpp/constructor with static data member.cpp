#include <iostream>
using namespace std;
 


class B{
    static int a;
    public:
    B(){
        cout<<"B constructor"<<endl;

    }
   int display(){
      return 0;
   }
  static int show(){
      cout<<"hello"<<endl;
      return 0;
   }
   ~B(){
       cout<<"destroy"<<endl;
   }
};
int B::a;
int main()
{
    B obj;
obj.display();
 B::show();
 return 0;
}