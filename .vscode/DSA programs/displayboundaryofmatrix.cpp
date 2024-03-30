#include<iostream>
using namespace std ;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
// int a[3][3]={1,2,3,4,5,6,7,8,9};
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }cout<<endl;
}
for(int j=0;j<n;j++){
if(j%2==0){
    for(int i=0;i<m;i++){
        cout<<a[i][j]<<" ";
    }cout<<endl;
}
else{
    for(int i=m-1;i>=0;i--){
        cout<<a[i][j]<<" ";
    }cout<<endl;
}
}
return 0;
}   