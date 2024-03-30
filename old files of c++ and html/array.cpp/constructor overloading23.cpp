#include<iostream>
using namespace std ;
class complex
{
    float img,real;
    public:
    complex(){
img=real=0;
    }
    complex(float i,float r){
        img=i;real=r;
    }
    complex(complex &t){
        
        complex c;
        t.real=real+c.real;
        t.img=img+c.img;
    }
    void display(){
        if(img>0){
            cout<<real<<"+i"<<img;

        }
        else{
            cout<<real<<"-i"<<img;
        }
    }
};
int main()
{
complex obj_1(1.0,2.4);
obj_1.display();

return 0;
}