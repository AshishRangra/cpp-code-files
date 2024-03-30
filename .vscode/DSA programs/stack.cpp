#include<iostream>
#include<stack>
using namespace std ;
int main()
{
    stack<int>s;
    s.push(1);
    cout<<"Print top element "<<s.top();
    s.pop();
    if(s.empty()){
       cout<<endl; cout<<"Stack is empty"<<endl;
    }

return 0;
}