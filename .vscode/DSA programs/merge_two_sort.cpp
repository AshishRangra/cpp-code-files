#include<iostream>
#include<vector>
using namespace std ;
int merge(int a[],int b[],int n,int m,int c[]){
int i=0,j=0;
int k=0;
while(i<n && j<m){
    if(a[i]<b[j]){
        c[k]=a[i];
        k++;
        i++;
    }
    else{
        c[k]=b[j];
        k++;
        j++;
    }
}
while(i<n){
    c[k++]=a[i++];

}
while(j<m){
    c[k++]=b[j++];
}
}
void display(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}
int main()
{
int a[]={1,3,5,7};
int b[]={4,8,9,10};
int c[8]={0};
merge(a,b,4,4,c);
display(c,8);
return 0;
}