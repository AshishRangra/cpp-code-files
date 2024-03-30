// #include<iostream>
// using namespace std ;
// int safe_position(int n,int k){
//     if(n==1)
//     return 1;
//     // The position returned by josephus(n - 1, k)
//         // is adjusted because the recursive call
//         // josephus(n - 1, k) considers the
//         // original position k % n + 1 as position 1
// return (safe_position(n-1,k)+k-1)%n+1;
// }
// int main()
// {
// cout<<safe_position(6,3);
// return 0;
// }
#include<vector>
#include<iostream>
using namespace std ;
int safePosition(vector<int>n,int k,int index){
    
    if(n.size()==1){
    cout<<n[0];
    return 0;}
    index=(index+k)%n.size();
    n.erase(n.begin()+index);
    safePosition(n,k,index);
}

int main()
{vector<int>n;
for(int i=1;i<5;i++){
  n.push_back(i);  
}
safePosition(n,2,0);
return 0;
}