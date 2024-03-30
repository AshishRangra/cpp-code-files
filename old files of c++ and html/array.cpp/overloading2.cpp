
#include<iostream>
using namespace std;
class complex
{
    private:
    float real,img;
    public:
    complex(float r=0,float i=0)
    {
        real=r;
        img=i;
    }
    void print()
    {
        cout<<real<<"+i"<<img<<endl;

    }
   void operator+(complex &c)
   {
      real=c.real+real;
       img=img+c.img;
   }
};
int main()
{
    complex c1(10,23),c2(2,3);
     c2+c1;
    
    c2.print();

    return 0;
}


