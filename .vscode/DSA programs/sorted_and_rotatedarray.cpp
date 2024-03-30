#include<iostream>
#include<vector>
using namespace std;
bool Check(vector<int>arr){
    int count=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>arr[i+1]){
count++;
        }
    }
    if(arr[arr.size()-1]>arr[0])
    count++;
    return count<=1;
}
int main(){
    vector<int>arr={4,5,6,1,2,3};
    cout<<Check(arr);
}