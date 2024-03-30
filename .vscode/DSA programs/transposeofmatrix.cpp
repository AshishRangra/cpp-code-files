// #include<iostream>
// using namespace std ;
// int main()
// {
// int m,n;
// cin>>m>>n;
// int a[m][n];
// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         cin>>a[i][j];
//     }
// }
// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//     cout<<a[i][j]<<" ";
       
// }cout<<endl;
       
// }

//  for(int i=0;i<m;i++){
//     for(int j=i;j<n;j++){
//         // swap(j,i);
//         int temp=a[i][j];
//         a[i][j]=a[j][i];
//         a[j][i]=temp;
//     }   
// }
// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//     cout<<a[i][j]<<" ";
       
// }cout<<endl;
       
// }
// return 0;
// }
// element search in matrix
#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
int m,n,x;
cin>>m>>n>>x;

int a[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
int r=0,c=n-1;
bool flag=false;
while(r<n && c>=0){
    if(a[r][c]==x){
        flag= true;
    }
    if(a[r][c]>x){
        c--;
    }
    else{
        r++;
    }
}

if(flag){
    cout<<"Element found";

}
else{
    cout<<"Element not found";
}
return 0;
}