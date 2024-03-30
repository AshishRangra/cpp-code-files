#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ;
int main()
{
vector<int>v;
v.push_back(9);
v.push_back(1);
v.push_back(3);v.push_back(4);v.push_back(5);v.push_back(7);
cout<<"Finding7      "<<binary_search(v.begin(),v.end(),7)<<endl;
cout<<"lower bound   "<<lower_bound(v.begin(),v.end(),7)-v.begin()<<endl;
cout<<"upper bound   "<<upper_bound(v.begin(),v.end(),9)-v.begin()<<endl;
int a=9,b=8;
cout<<"amx"<<max(a,b);cout<<endl;
cout<<"Min"<<min(a,b);cout<<endl;
swap(a,b);
cout<<a;cout<<endl;
cout<<b;cout<<endl;
string aa={"a,b,df,ef"};
cout<<aa;
cout<<endl;
reverse(aa.begin(),aa.end());
cout<<aa;
for(int i:v){
    cout<<i<<" ";
}cout<<endl;
rotate(v.begin(),v.begin()+2,v.end());
cout<<"after rotating";
for(int i:v){
    cout<<i<<" ";
}cout<<endl;
sort(v.begin(),v.end());
for(int i:v){
    cout<<i<<" ";
}cout<<endl;
return 0;
}