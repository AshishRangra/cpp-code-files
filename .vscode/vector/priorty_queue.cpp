#include<iostream>
#include<queue>
using namespace std ;
int main()
{
priority_queue<int>i;
i.push(1);
i.push(2);
i.push(3);
priority_queue<int,vector<int>,greater<int>> min;
min.push(7);
min.push(6);
min.push(9);
min.push(8);
int n=i.size();
cout<<"i size"<<i.size()<<endl;
for(int p=0;p<n;p++){
cout<<i.top()<<" ";
i.pop();
}
cout<<endl;
int s=min.size();
for(int p=0;p<s;p++){
cout<<min.top()<<" ";
min.pop();
}
return 0;
}