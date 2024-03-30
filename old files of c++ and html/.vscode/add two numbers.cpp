#include<iostream>
using namespace std;
class A{
    int a;
    int b;
    
    public:
    void get_data(int x,int y){
       a=x;
       b=y;
    }
    void display(){
        cout<<"value of a:"<<a<<endl;
        cout<<"value of b:"<<b<<endl;
       
        
    }
    int sum(){
        int c;
        c=a+b;
        return c;
    }
};
int main(){
    int add;
    A obj_1;
    obj_1.get_data(12,13);
    add=obj_1.sum();
    obj_1.display();
    cout<<add;
    return 0;
}
