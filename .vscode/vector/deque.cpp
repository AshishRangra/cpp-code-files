#include<iostream>
#include<deque>
using namespace std ;
int main()
{
deque<int>d;
d.push_back(1);
d.push_front(2);
for(int i:d){
    
    cout<<i<<" ";
}
d.pop_back();
cout<<endl;
for(int i:d){
    cout<<i<<" ";
}
cout<<endl;
cout<<"Print first index element"<<d.at(0)<<endl;
d.push_back(1);
d.erase(d.begin(),d.begin()+1);
cout<<"after erase"<<d.size()<<endl;
for(int i:d){
    cout<<i<<" ";
}
return 0;
}