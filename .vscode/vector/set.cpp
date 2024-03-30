#include<iostream>
#include<set>
using namespace std ;
int main()
{
set<int> s;
s.insert(5);
s.insert(5);s.insert(4);s.insert(1);s.insert(2);
for(int i:s){
    cout<<i<<" ";
}cout<<endl;
s.insert(7);s.insert(4);s.insert(3);s.insert(2);
for(int i:s){
    cout<<i<<" ";
}cout<<endl;
set<int>::iterator it=s.begin();
it++;
s.erase(s.begin());
s.erase(it);
for(int i:s){
    cout<<i<<" ";
}cout<<endl;
cout<<s.count(5);cout<<endl;
set<int>::iterator itr=s.find(4);
cout<<"value present at itr"<<*it<<endl;
for(auto it=itr;it!=s.end();it++){
    cout<<*it<<" ";

}cout<<endl;
return 0;
}