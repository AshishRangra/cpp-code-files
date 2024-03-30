#include<iostream>
using namespace std ;
class Queue{
    private:
    int front;
    int rear;
    int arr[5];
    public:
Queue(){
    front=-1;
    rear=-1;
    // for(int i=0;i<5;i++){
    //     arr[i]=0;
    // }
}
bool isEmpty(){
    if(front==-1 && rear==-1)
    return true;
    else{
        return false;
    }

}
bool isFull(){
    if(rear==4)
    return true;
    else
    return false;

}
void enqueue(int val){
    if(isFull()){
        cout<<"Queue is FULL"<<endl;
        return;
    }
    else if(isEmpty()){
rear=0;
front=0;
arr[rear]=val;

    }
    else{
        rear++;
        arr[rear]=val;
    }
}
int dequeue(){
    int x;
    if(isEmpty())
    {
        cout<<"Queue is empty"<<endl;
        return 0;
    }
    else if(front==rear){
        x=arr[front];
         arr[front]=0;
        rear=-1;
        front=-1;
       
        return x;

    }
    else{
        x=arr[front];
        arr[front]=0;
        front++;
        return x;
    }

}
int count(){
    return(rear-front+1);
}
void display(){
    cout<<"All value in queue are:"<<endl;
    for(int i=0;i<=rear;i++){
        cout<<arr[i]<<endl;
    }
}
};
int main()
{
    Queue q1;
    int option,val;
do{
     cout<<"Choose the operation you want to be done in stack"<<endl;
    cout<<"1.Enqueue"<<endl;
    cout<<"2.Dequeue"<<endl;
    cout<<"3.isEmpty"<<endl;
    cout<<"4.isFull"<<endl;
    
    cout<<"5.count"<<endl;
   
    cout<<"6.Display"<<endl;
    cout<<"7.clearscreen"<<endl;

cin>>option;
switch(option){

case 0:
exit(0);
break;
case 1:
cout<<"Enqueue operation\n"<<endl;
cin>>val;
q1.enqueue(val);
break;
case 2:
cout<<"Dequeue operation\n"<<q1.dequeue()<<endl;

break;
case 3:
if(q1.isEmpty())
cout<<"Queue is empty"<<endl;
else
cout<<"Queue is not empty"<<endl;


break;
case 4:
if(q1.isFull())
cout<<"Queue is full"<<endl;
else
cout<<"Queue is not full"<<endl;

break;
case 5:
cout<<"count operation "<<q1.count()<<endl;
break;
case 6:
cout<<"Display function called"<<endl;
q1.display();
break;
case 7:
system("cls");
break;
default:
cout<<"choose right option"<<endl;
break;
}}while(option!=0);
    

return 0;
}