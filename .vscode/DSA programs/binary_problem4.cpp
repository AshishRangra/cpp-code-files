//most important search in sort rotated array
#include<iostream>
using namespace std ;
int srch_element(int arr[],int n){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while(s<e){
    if(arr[mid]>=arr[0]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=s+(e-s)/2;
}return s;
}
int binary_search(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    // int mid=(start +end)/2;
int mid=start+(end-start)/2;
    while(start<=end){
         if(arr[mid]==key){
            return mid;
         }
         if(key>arr[mid]){
            start=mid+1;

         }
         else{
            end=mid-1;

         }
          mid=start+(end-start)/2;
    }return -1;
}
int findPositionofelement(int arr[],int n,int k){
    int pivot=srch_element(arr,n);
   if(k>=arr[pivot] && k<=arr[n-1]){
    return binary_search(arr,pivot,n-1,k);
   } 
   else{
    return binary_search(arr,0,pivot-1,k);
   }
}
int main()
{
int a[]={7,9,0,2,3};
cout<<findPositionofelement(a,5,0);
return 0;
}