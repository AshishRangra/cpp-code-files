#include<iostream>
using namespace std;
int peakElement(int a[], int n)
    {
       int b=0;int x;
       for(int i=0;i<n;i++){
           if(b<a[i])
           b=a[i];
       }
       for(int i=0;i<n;i++){
           if(b==a[i]){
           cout<<i;
           return i;
           }
       }
      
    }
    
    int main(){
        int a[]={1,2,3};
        peakElement(a,3);
    }