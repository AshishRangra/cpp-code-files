#include<iostream>
using namespace std ;
class stat
{

public:
int a;
static int b;

stat(){
    a=++b;

}
void display()
{
    cout<<"value of a:"<<a<<endl;
}
static void sta_display()
{

    cout<<"value of b:"<<b<<endl;
}
};
int stat::a;
int main()
{
    stat obj_1;
    obj_1.display();
    obj_1.sta_display();


return 0;
}