#include<iostream>
using namespace std ;
class complex
{
    float real,img;
    public:
    complex()
    {
        real=img=5;
    }
    complex(float r,float i)
    {
        real=r;
        img=i;
    }
    void operator++(int)
    {
        real++;
       img++;
    }
    void display(){
        cout<<real<<"+i"<<img<<endl;
    }
};
int main()
{complex C1;
C1.display();
C1++;
C1.display();


return 0;
}