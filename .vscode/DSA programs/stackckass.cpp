#include<iostream>
#include<stack>
using namespace std ;
class Stack{
    public:
int *arr;
int top;
int size;
Stack(int size){
    this->size=size;
    arr=new int(size);
    top=-1;
}
void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"Stack is overflow";
    }
}
void pop(){
    if(top>=0){
        top--;
    }
    else{
            cout<<"stack underflow";
    }
}
int peek(){
    if(top>=0)
return arr[top];
else{
    cout<<"Stack is empty";
    return -1;
}
}
bool isempty(){
if(top==-1){
    return true;
}
else{
    return false;
}
}
};
int main()
{
Stack st(5);
st.push(22);
st.push(20);
st.push(44);
st.push(44);
st.push(44);
st.push(44);
cout<<st.peek()<<endl; 
cout<<st.isempty()<<endl;
st.pop();
cout<<st.peek()<<endl; 
   if(st.isempty()){
       cout<<endl; cout<<"Stack is empty"<<endl;
    }
else{
    cout<<"stack is not empty"<<endl;
}
return 0;
}