#include<iostream>
#include<unordered_set>
#include<map>
using namespace std;
void subarraysum(int a[],int k,int n){
    int currSum=0;
    int end=-1;
    int start=0;
    // unordered_set<int>m;
 map<int,int>m;
   
    for(int i=0;i<n;i++){
        currSum+=a[i];
        if(currSum-k==0){
            start=0;end=i;
          return;
        }
            if(m.find(currSum-k)!=m.end()){
                start=m[currSum-k]+1;
               end=i;
               cout<<start<<"     "<<end;
                return;
            }
            m[currSum]=i;
    }
      if(end==-1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"found"<<start<<" "<<end;
    }
  
}
int main(){
    int a[]={10,15,-5,15,-10,5};
    int k=5;
    subarraysum(a,k,6);   
    return 0;
}