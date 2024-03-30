#include<iostream>
#include<stack>

using namespace std ;
class ashish{
    public:
   int size;
   int *arr;
   int top;
   int top1;  
   ashish(int size){
    this->size=size;
    
    top=-1;
    top1=size;
    arr=new int[size];
   } 
   void push1(int n){
        if(top1-top>1 ){
            top++;
            arr[top]=n;
        }
        else{
            cout<<"stack is overflow";
        }
   }
   void push2(int n){
        if((top1-top)>1 ){
            top1--;
            arr[top1]=n;
        }
        else{
            cout<<"stack is overflow";
        }
   }
   int pop(){
    if(top>=0){
        int ans=arr[top ];
        top--;
    }
    else{
        cout<<"Stack is underflow"<<endl;
        return -1;
    }
   }
   int pop1(){
    if(top1<size){
        int ans=arr[top1];
        top1++;
        return ans;
    }
    else{
        return -1;
    }
   }
 int peek(){
    return arr[top];
 }
 bool isempty(){
    if(top==-1 && top1>=size){
        return true;
    }
    else{
        return false;
    }
 }
 void display(){
    cout<<"Stack elements are: ";
   if(top1<size){
       for(int i=top1;i<size;i++){
        cout<<arr[i]<<" ";
        
       }
       
      }
    
    if(top>=0){
       
       for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
        
       }
    }
     
    else{
        cout<<"stack is empty";
    
    }cout<<endl;
 }
};

int main()
{
ashish obj(6);
obj.push1(1);
obj.push1(2);
obj.push1(3);
obj.push2(4);
obj.push2(5);
obj.push2(6);
obj.pop();
obj.pop1();
obj.display();
return 0;
}
