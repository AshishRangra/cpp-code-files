#include<iostream>
using namespace std ;
int binary_search(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    // int mid=(start +end)/2;
int mid=start+(end-start)/2;
    while(start<=end){
         if(arr[mid]==key){
            return mid;
         }
         if(key>mid){
            start=mid+1;

         }
         else{
            end=mid-1;

         }
          mid=start+(end-start)/2;
    }return -1;
}
int main()
{
  int a[]={1,2,3,4,5,6,7,8};

  int index=binary_search(a,7,1);
 cout<<"index is:"<<index<<endl;
return 0;
}