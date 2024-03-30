#include<iostream>
#include<map>
using namespace std ;
int main()
{
map<int,string>m;
m[1]="ashish";
m[2]="rangra";
m[3]="hello";
for(auto i:m){
cout<<i.first<<" ";
}cout<<endl;

 m.insert({5,"fdfhb"});
for(auto i:m){
cout<<i.first<<" ";
}cout<<endl;
for(auto i:m){
cout<<i.second<<" ";
}cout<<endl;
cout<<"find 5         "<<m.count(5)<<endl;
m.erase(5);
cout<<"find 5         "<<m.count(5)<<endl;
for(auto i:m){
cout<<i.second<<" ";
}cout<<endl;
for(auto i:m){
cout<<i.first<<" ";
}cout<<endl;
auto it =m.find(3);
for(auto i=it;i!=m.end();i++){
cout<<(*i).first<<endl;
}

return 0;
}