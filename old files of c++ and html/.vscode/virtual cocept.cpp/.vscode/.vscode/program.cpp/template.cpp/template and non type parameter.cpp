#include<iostream>
using namespace std ;
/*template<class T,int N>
class A{
    T a[N];
    public:
    void setdata(int x,T b){
        a[N]=b;
    }
    T getdata(int x){
        return a[x];

    }
};
int main()
{A<int,10>obj;
A<int,54>obj_1;
cout<<"a[0]"<<obj1.getdata(8);

return 0;
}*/
template<class T>
class A{
    protected:
    T a,b;
    public:
    void getdata(){
        a=9;
        b=9.8;
    }
};
template<class T>
class B:public A{
    public:
    T c;
    void get(){
       c=a+b;
    }
    void display(){
        
        cout<<c;
    }

};
int main(){
    B<float>obj;
    obj.display();
    return 0;
}