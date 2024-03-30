// /C++ Program for Block swap algorithm for array rotation
#include<iostream>
#include<algorithm>
using namespace std;
void get_input(int a[],int n){
for(int i=0;i<n;i++){
    cin>>a[i];
}
}
void display(int a[],int n){
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
// void swap(int a[],int n,int d,int fi,int si){
//     int temp;
//    for(int i=0;i<d;i++){
//     temp=a[fi+i];
//     a[fi+i]=a[si+i];
//     a[si+i]=temp;
  
//    }  
// }
// void swap(int a[],int n,int d){
//     int temp;
//     for(int i=0;i<d;i++){
//         for(int j=0;j<n-1;j++){
//         if (a[j]<a[j+1])
//         {
//          temp=a[j];
//          a[j]=a[j+1];
//          a[j+1]=temp;
//         }
//         }
//     }
//    
// }

int main(){
int n;
 cin>>n;
int a[n];
int d;
get_input(a,n);
sort(a,a+n);
display(a,n);
cout<<"element :";
cin>>d;
swap(a,n,d);
display(a,n);
return 0;
}