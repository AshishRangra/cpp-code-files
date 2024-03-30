#include<iostream>
#include<unordered_map>
using namespace std;
void count(int a[],int n,int k){
    unordered_map<int,int>map;
       int count=0;
       for(int i=0;i<k;i++){
        if(map[a[i]]==0){
            count++;
        }
        map[a[i]]+=1;
       }
       cout<<count<<endl;
       for(int i=k;i<n;i++){
        if(map[a[i-k]]==1){
            count--;

        }
        map[a[i-k]]-=1;
        if(map[a[i]]==0){
            count++;
        }
        map[a[i]]+=1;
         cout<<count<<endl;
       }
      
      
        
}
int main(){
    int a[]={1, 2, 1, 3, 4, 2, 3};
 count(a,7,4);
    return 0;
}