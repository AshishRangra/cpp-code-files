#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}
int volume(int l,int b,int h)
{
    return(l*b*h);
}
int main()
{
    cout<<"sum of two number "<<sum(1,2)<<endl;
    cout<<"sum of 3 number "<<sum(1,2,3)<<endl;
    cout<<"volume of cuboid "<<volume(10,20,30);
    return 0;
}