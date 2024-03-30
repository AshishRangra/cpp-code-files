#include<iostream>
using namespace std ;
class example{
    int a;
    protected:

    int b;
    public:
    int c;
    void get_value(int x,int y,int z);
    void display();
};
void example::get_value(int x,int y,int z){
a=x;
b=y;
c=z;
}
void example::display(){
    cout<<"value of a:"<<a<<endl;
    cout<<"value of b:"<<b<<endl;
    cout<<"value of c:"<<c<<endl;
}
int main()
{
example obj_1;
obj_1.get_value(1,2,3);
obj_1.display();
return 0;
}