#include<iostream>
#include<queue>
using namespace std ;
int main()
{
queue<string>s;
s.push("ashish");
s.push("rangra");
s.push("hello");
cout<<"first"<<s.front()<<endl;
s.pop();
cout<<"first "<<s.front()<<endl;
cout<<"size "<<s.size()<<endl;
return 0;
}