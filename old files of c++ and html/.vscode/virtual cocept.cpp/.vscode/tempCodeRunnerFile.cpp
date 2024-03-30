#include<iostream>
using namespace std ;
void sum(int a,int b){
    cout<<"add:"<<a+b<<endl;
   

}
int main()
{
    void(*ptr)(int,int);
    ptr=&sum;
    (*ptr)(2,3);

return 0;
}