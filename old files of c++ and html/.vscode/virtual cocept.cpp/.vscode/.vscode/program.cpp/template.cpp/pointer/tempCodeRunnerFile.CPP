#include<iostream>
using namespace std ;
int main()
{
/*int a=3,*ptr;
ptr=&a;
cout<<"Value of ptr"<<*ptr;
delete(ptr);
int *arr=new int[7];

arr[0]=1;

arr[1]=10;
arr[2]=19;
cout<<"value  "<<arr[0];*/
int arr[]={1,2,3,4,5,6},*ptr;//int arr[6]={1,2,3,4,5,6},*ptr;
/*ptr=&arr[6-1];
for(int i=5;i>0;i--)
{
    cout<<"Address of variable"<<ptr<<endl;

  
    cout<<"Value of variable"<<*ptr<<endl;
   // ptr++;
   ptr--;
}
*/
ptr=arr;
for(int i=0;i<6;i++)
{
    cout<<"Address of variable"<<ptr<<endl;

  
    cout<<"Value of variable"<<*ptr<<endl;
    ptr++;
}
return 0;
}