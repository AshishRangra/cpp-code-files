// #include<algorithm>
// #include<iostream>
// using namespace std;
// pair<long long, long long> getMinMax(long long a[], int n) {
//     // a.sort();
//     // int &min=*min_element(a,a+n);
//     // int &max=*max_element(a,a+n);
//     pair<long, long>p;
//     p.first=1e6;
//  p.second=00LL;
//    for(int i=0;i<n;i++){
//        if(a[i]<=p.first){
//            p.first=a[i];
//        } 
//         if(a[i]>=p.second){
//            p.second=a[i];
//        }
//    }
//    cout<<p.first<<" "<<p.second;
//    return p;
    
    
// }
// int main(){
//    long long a[100];
//     int m=199;
//     for(int i=0;i<100;i++){
//         a[i]=m;
//         m++;
//     }
// getMinMax(a,100);

// }
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    int a[100];
     int m=199;
    for(int i=0;i<100;i++){
        a[i]=m;
        m++;
    }
   
   int &min=*min_element(a,a+100);
   int &max=*max_element(a,a+100);
   cout<<min<<" "<<max;
}