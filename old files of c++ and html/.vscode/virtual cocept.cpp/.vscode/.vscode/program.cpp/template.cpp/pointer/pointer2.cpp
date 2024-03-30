#include<iostream>
using namespace std;
class X
{ 
    int a;
    public:
   
    void get_a(int r){
        a=r;
    }

        void display()
        {
            cout<<"value of a:"<<a;

        }
    };
    int main()
    {
        X obj_1;
        //X *ptr=&obj_1;
      //  ptr->get_a(10);
        //ptr->display();
        X *ptr=new(X);
        (*ptr).get_a(2);
        (*ptr).display();
        return 0;

    }
