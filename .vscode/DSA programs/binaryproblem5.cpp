#include<iostream>
using namespace std ;
int sq(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int square=mid*mid;
        if(square==n)
            return mid;
        
        if(square<n){
          ans=mid;
          s=mid+1;
        }
         else{
            e=mid-1;
         }
         mid=s+(e-s)/2;
        }return ans;
    }
// int mysqrt(int x){
//     return sq(x);
// }
double flOTSQROOT(int n,int precision,int tempsol){
    double factor=1;
    double ans =tempsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j+=factor){
            ans=j; 
        }
    }return ans;
}
int main()
{int n;
cin>>n;
int tempsol=sq(n);
cout<<tempsol<<endl;
cout<<flOTSQROOT(n,3,tempsol);
return 0;
}



// =========================================
// int sqrtN(long long int N)
// {
//    int i=0;
//    for(i;(i*i)<=N;i++){
//    }
//    return i-1;
// }