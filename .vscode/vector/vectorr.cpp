#include<iostream>
#include<vector>
using namespace std ;
int main()
{
vector<int> v;
vector<int>a(5,1);
vector<int>last(a);
for(int i:last){
    cout<<i<<" ";
}cout<<endl;
v.push_back(1);
v.push_back(2);
v.push_back(3);

cout<<"capacity "<<v.capacity()<<endl;
cout<<"size "<<v.size()<<endl;
cout<<"element at  2nd index "<<v.at(1)<<endl; 
 cout<<"First element"<<v.front()<<endl;
cout<<"Last element"<<v.back()<<endl;
v.pop_back();

cout<<"capacity "<<v.capacity()<<endl;
cout<<"size "<<v.size()<<endl;
for(int i:v){
    cout<<i<<" ";
}
v.clear();
cout<<"capacity "<<v.capacity()<<endl;
cout<<"size "<<v.size()<<endl;

return 0;
}