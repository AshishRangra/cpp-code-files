#include<iostream>
using namespace std;
int main()
{
    int a;
    a=3;
    int* ptr=&a;
    delete(ptr);
    cout<<"value of a is:"<<*(ptr);
    int *arr = new int[3];
    
    arr[0]=1;
    arr[1]=3;
    arr[2]=5;
    cout<<"value of arr :"<<arr[0];
    return 0;
}