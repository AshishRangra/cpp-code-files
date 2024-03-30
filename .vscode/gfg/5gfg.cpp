// C/C++ Program for Given an array A[] and a number x, check for pair in A[] with sum as x
#include<iostream>
using namespace std;
int main(){
//     int a[]={1,2,3,4,5};
//     int b=3;
//     int l=0;
// for(int i=0;i<5;i++){
//         if((a[l]+a[i+1])==b){
//             cout<<"given array has a pair with sum as b";
         
//         }
//         else {
//             l++;
//             if((a[l]+a[i+1])==b){
//             cout<<"given array has a pair with sum as b";
//         }
//         }

    
// }
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}cout<<endl;
int s; //check for pair in A[] with sum as x
cin>>s;
int l=-1;
for(int i=0;i<n;i++){ 
    l++;   
    for(int j=0;j<n;j++){
    {
        if(a[l]==a[j]){
        ;
       }
        else if((a[l]+a[j])==s){
        cout<<"given array has a pair("<<a[l]<<","<<a[j]  <<") with sum as b";
        return 0;
            }
    }
    }
     if(i==n-1){
        cout<<"there's no pair exist having sum as b";
    }
    } 
    return 0;
}