#include<iostream>
using namespace std ;
class complex
{
    int real,img;
    public:
    complex(int x,int y){
        real=x;
        img=y;
    }
    void display(){
        if(img>0){
            cout<<real<<"+i"<<img;

        }
        else{
            cout<<real<<"-i"<<img;
        }
    }
    complex operator+(complex c){
        complex t;
        t.real=real+c.real;
        t.img=img+c.img;
        return t;
}

        complex operator-(complex c){
        complex t;
        t.real=real-c.real;
        t.img=img-c.img;
        return t;
        }
        complex operator*(complex c){
        complex t;
        t.real=real*c.real-img*c.img;
        t.img=img+c.img;
        return t;
}
        complex operator*(complex c){
        complex t;
        t.real=real+c.real;
        t.img=img+c.img;
        return t;
        }
int main()
{

return 0;
}