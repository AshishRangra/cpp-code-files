#include<iostream>
using namespace std ;
int peak(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }mid=s+(e-s)/2;
    }
    
    return s;
}
int main()
{
 int a[]={3,4,5,6,1};
 cout<<peak(a,5);
return 0;
}













// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int s=0;
//         int e=arr.size()-1;
//         int mid=s+(e-s)/2;
//         while(s<e){
//             if(arr[mid]<arr[mid+1]){
// s=mid+1;}
//             else{
//                 e=mid;
//             }mid=s+(e-s)/2;
//         }return s;
//     }
// };