#include<iostream>
#include<stack>
using namespace std ;
int main()
{
stack<string>s;
s.push("ashish");
s.push("rangra");
s.push("hello");
cout<<"top element"<<s.top()<<endl;
s.pop();
cout<<"top element"<<s.top()<<endl;
cout<<"size "<<s.size()<<endl;
cout<<"empty or not "<<s.empty()<<endl;
return 0;
}