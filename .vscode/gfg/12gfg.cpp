// C/C++ Program for Median of two sorted arrays
#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m],b[n],c[m+n];
    int k=0;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
     for(int i=0;i<n;i++){
        cin>>b[i];
    }
     for(int i=0;i<m;i++){
      cout<<a[i]<<"  ";
    }cout<<endl;
     for(int i=0;i<n;i++){
       cout<<b[i]<<"  ";
    }cout<<endl;
    for(int i=0;i<m;i++){
        c[k]=a[i];
        k++;
    }
     for(int i=0;i<n;i++){
        c[k]=b[i];
        k++;
    }
    sort(c,c+(m+n));
     for(int i=0;i<m+n;i++){
       cout<<c[i]<<"    ";
    }cout<<endl;
    int median;
median=(m+n)/2;
if(m+n/2 ==0){

// cout<<median;
int avg=(c[median]+c[median-1])/2;
cout<<avg<< " is the median of given two array";
}
else{
    cout<<c[median]<< " is the median of given two array";
}
return 0;
}