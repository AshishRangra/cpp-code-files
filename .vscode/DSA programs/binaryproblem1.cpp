#include<iostream>
using namespace std ;
int firstoccurence(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int ans=-1;
       int  mid=start+(end-start)/2;
    while(start<=end){
   
        if(arr[mid]==k){
            ans=mid;
            end=mid-1;
        }
        else if(k>arr[mid]){
            start=mid+1;
                }
        else if(k<arr[mid]){
        end=mid-1;
           
        } mid=start+(end-start)/2;
    }return ans;
}
int lastoccurence(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int ans=-1;
       int  mid=start+(end-start)/2;
    while(start<=end){
   
        if(arr[mid]==k){
            ans=mid;
            start=mid+1;
        }
        else if(k>arr[mid]){
            start=mid+1;
                }
        else if(k<arr[mid]){
        end=mid-1;
           
        } mid=start+(end-start)/2;
    }return ans;
}
int main()
{
int a[]={1,3,4,4,5};
cout<<"First occurence is"<<firstoccurence(a,5,3)<<endl;
cout<<"last occurence is"<<lastoccurence(a,5,3);
cout<<endl;
int total_occurence=  lastoccurence(a,5,3)-firstoccurence(a,5,3)+1;
cout<<total_occurence;
return 0;
}


// int firstoccurence(vector<int>& arr,int n,int k){
//     int start=0;
//     int end=n-1;
//     int ans=-1;
//        int  mid=start+(end-start)/2;
//     while(start<=end){
   
//         if(arr[mid]==k){
//             ans=mid;
//             end=mid-1;
//         }
//         else if(k>arr[mid]){
//             start=mid+1;
//                 }
//         else if(k<arr[mid]){
//         end=mid-1;
           
//         } mid=start+(end-start)/2;
//     }return ans;
// }
// int lastoccurence(vector<int>& arr,int n,int k){
//     int start=0;
//     int end=n-1;
//     int ans=-1;
//        int  mid=start+(end-start)/2;
//     while(start<=end){
   
//         if(arr[mid]==k){
//             ans=mid;
//             start=mid+1;
//         }
//         else if(k>arr[mid]){
//             start=mid+1;
//                 }
//         else if(k<arr[mid]){
//         end=mid-1;
           
//         } mid=start+(end-start)/2;
//     }return ans;
// }
// pair<int,int>firstAndLastPosition(vector<int>& arr,int n,int k){
//     pair<int,int>p;
//     p.first=firstoccurence(arr,n,k);
//     p.second=lastoccurence(arr,n,k);
//     return p;
// }