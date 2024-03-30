#include<iostream>
using namespace std ;
int main()
{//accessing address of a variable
int a,n,*ptr;//variable and pointer declaration
 a=122;
ptr=&a;//pointer initialization
n=*ptr;//access value from a pointer
cout<<"value of ptr "<<n;
return 0;
}