// multiply two amtrix
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m;
    cin>>n;
    
    int a[m][n],b[m][n];
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
      }
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
      }
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<a[i][j]<<"  ";
        }cout<<endl;
      }
     cout<<endl;

       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<b[i][j]<<"  ";
        }cout<<endl;
      }
    int c[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            cout<<c[i][j]<<"  ";
        }cout<<endl;
    }
      
return 0;
}