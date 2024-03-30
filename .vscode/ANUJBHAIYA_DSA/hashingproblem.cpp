// #include <iostream>
// #include <unordered_set>
// using namespace std;
// int main()
// {
//     unordered_set<int> a;
//     a.insert(5);
//  a.insert(5); a.insert(10); a.insert(5); a.insert(4);
//     for (int element : a)
//     {
//         a.insert(element);
//     }
//     cout << a.size();
//     return 0;
// }

// ============================================================
// union and intersection
//  #include <iostream>
// #include <unordered_set>
// using namespace std;
// int Union(int a[],int b[]){
// unordered_set<int >set;
// for(int i=0;i<5;i++){
//     set.insert(a[i]);
// }
// for(int i=0;i<5;i++){
//     set.insert(b[i]);
// }

// return set.size();
// }
// int main(){
//      int a[]={1,2,3,3,2};
//      int b[]={43,2,1,5,6};
//      cout<<Union(a,b);
//      return 0;
// }

// / ============================================================
// union and intersection
 #include <iostream>
#include <unordered_set>
using namespace std; 
void intersection(int a[],int b[],int n,int m){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
      for(int i=0;i<m;i++){
        if(s.find(b[i])!=s.end()){
  s.erase(b[i]);
        
     cout<<b[i]<<" ";
        }
    }
}
int main(){
    int a[6]={1,3,5,7,9,76};
    int b[6]={12,43,65,1,3};
  intersection(a,b,6,6);

}