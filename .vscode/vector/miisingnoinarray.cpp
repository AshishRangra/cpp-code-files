#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
using namespace std;
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        sort(array.begin(), array.end());
        int k=0;
        for(int i=0;i<n;i++){
            k++;
            if(array[i]!=k){
                // cout<<array[i];
               return k;
                
            }
        }return -1;
    }
};
int main(){
    vector<int>array;
    array[0]=1;
    array[1]=3;
    array[2]=4;
    array[3]=5;
    Solution obj;
    cout<<obj.MissingNumber(array,4);
    
    // int arr[5]={1,3,4,5};
    // int k=0;
    // for(int i=0;i<5;i++){
    //     k++;
    //         if(arr[i]!=k){
    //         cout<<k;
    //        return 0;
    // }
    // }
        return 0;
}