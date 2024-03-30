// #include<iostream>
// using namespace std ;
// int main()
// {
//     int m;
//     cin>>m;
// int arr[m][m][m];
// int sum=0;
// for(int i=0;i<m;i++){
//     for(int j=0;j<m;j++){
//         for(int k=0;k<m;k++){
//             cin>>arr[i][j][k];
//         }
//     }
// }
// for(int i=0;i<m;i++){
//     for(int j=0;j<m;j++){
//         for(int k=0;k<m;k++){
//             cout<<"arr["<<i<<"]["<<j<<"]["<<k<<"]"<<arr[i][j][k]<<endl<<" ";
//         }

//     }
// }
// for(int i=0;i<m;i++){
//     for(int j=0;j<m;j++){
//         for(int k=0;k<m;k++){
//             sum+=arr[i][j][k];
//         }
//     }
// }
// for(int i=0;i<m;i++){
//     for(int j=0;j<m;j++){
//         for(int k=0;k<m;k++){
//             // sum+=arr[i][j][k];
           
//         }
//     }
// }
// cout<<endl<<sum;
// return 0;
// }
#include<iostream>
using namespace std ;
int main()
{
int  a[10]={32,46,31,21,12,21,21,11,10,0};
for(int i=0;i<10;i++){
    if(a[i]<a[i+1]){
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;

    }
}
for(int i=0;i<10;i++){
    cout<<a[i]<<" ";
}
return 0;
}