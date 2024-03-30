// #include<iostream>
// using namespace std ;
// int Sum(int n){
//     if(n==0){
//         return 0;
//     }
//     int prevSum=Sum(n-1);
//     return n+prevSum;
// }
// int main()
// {
// int n;cin>>n;
// cout<<Sum(n);
// return 0;
// }

// pointer
#include<iostream>
using namespace std ;
int main()
{
int a=10;
int *ptr;
int* b=&a;

ptr=&a;
cout<<a<<" "<<&a<<endl;
cout<<ptr;
cout<<a<<" "<<&a<<endl;
*b=20;
cout<<a<<endl;
b++;
cout<<b;
int arr[]={1,2,3,4,56,7,8};
cout<<*arr<<endl; 
int *bptr=arr;
for(int i=0;i<9;i++){
    cout<<*(arr+i)<<endl;
}

return 0;
}