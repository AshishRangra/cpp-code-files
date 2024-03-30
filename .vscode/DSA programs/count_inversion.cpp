#include<iostream>
using namespace std ;
void merge_sort(int *a,int s,int e){
   
int mid=s+(e-s)/2;
int l=mid-s+1;
int l2=e-mid;
int *first=new int[l];
int *second=new int[l2];
int m=s;
for(int i=0;i<l;i++){
    first[i]=a[m++];
}
for(int i=0;i<l2;i++){
    second[i]=a[m++];
}
int index=0;
int index1=0;
mid=s;
while(index<l && index <l2){
    if(first[index]<second[l2]){
        a[m++]=first[index++];
    }
    else{
        a[m++]=second[index1++];
    }
    while(index<l){
    a[m++]=first[index++];

}
while(index1<l2){
    a[m++]=second[index1++];
}
}
}

void merge(int *a,int s,int e){
    if(s>=e){
        return ;
    }
    int mid=s+(e-s)/2;
    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);
    merge(a,s,e);

}
int main()
{
int a[]={1,20,6,4,5};

merge(a,0,3);
return 0;
}