#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
    void get_data(int a,int b)
    { 
        real=a;
        img=b;


    }
    void show_data()
    {
        cout<<"value of real="<<real<<endl;
        cout<<"value of inaginary="<<img<<endl;

    }
};
int main()
{
    complex c1;
  // complex  *ptr=&c1;
    //(*ptr).get_data(2,3);
    //(*ptr).show_data();
    complex *ptr=new (complex);
    ptr->get_data(3,2);
    ptr->show_data();
    return 0;

}