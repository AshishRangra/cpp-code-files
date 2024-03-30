#include<iostream>
using namespace std ;
class Queue{
int arr[1000];
int rear;
int front;
public:
Queue(){
    front=-1;
    rear=-1;
    // for(int i=0;i<5;i++){
    //     arr[i]=0;
    // }
}
bool isEmpty(){
    if(front==-1)
    return true;
    else
    return false;
}
bool isFull(){
    if(rear==1000-1)
    return true;
    else{
        return false;
    }

}
void enqueue(int val){
    // cout<<rear;
    if(isFull()){
        cout<<"Queue is full";
        return;
    }
else if(isEmpty()){
    rear=0;
    front=0;
    // cout<<rear;
    arr[rear]=val;

}
else{
    rear++;
    // cout<<rear;
    arr[rear]=val;
    cout<<"VAlue inserted";
}

}
int  dequeue(){
    int x;
if(isEmpty()){
    cout<<"QUeue is empty";
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
    for(int i=0;i<=rear;i++){
        cout<<arr[i]<<" ";
    }
}
};

int main()
{
Queue q1;
int option ,val;
do{
    cout<<endl;
    cout<<"choose operation do yu want:"<<endl;
    cout<<"1.Enqueue()"<<endl;
    cout<<"2.DEQEUE()"<<endl;
    cout<<"3.isEmpty"<<endl;
    cout<<"4.isFull()"<<endl;
    cout<<"5.count()"<<endl;
    cout<<"6.display()"<<endl;
    cout<<"7.clearscreen"<<endl;
    cout<<"8.Exit"<<endl;
    cin>>option;
    switch (option){
       
        case 1:
        cout<<"Enter an item to Enqueue in the queue: "<<endl;
        cin>>val;
        q1.enqueue(val);
        break;
        case 2:
        if(q1.isEmpty()){
          q1.isEmpty();
        }
        else{
        cout<<"Dequeue value: "<<q1.dequeue()<<endl;
        break;
        }
        case 3:
        if(q1.isEmpty())
        cout<<"Queue is Empty"<<endl;
        else
        cout<<"queue is not empty"<<endl;
        break;
        case 4:
        if(q1.isFull())
        cout<<"Queue is Full"<<endl;
        else
        cout<<"Queue is not full"<<endl;
        break;
        case 5:
        cout<<"Count of items in queue:"<<q1.count()<<endl;
        break;
        case 6:
        cout<<"Display function callled:"<<endl;
        q1.display();
        break;
        case 7:
        system("cls");
        break;
        case 8:
       return 0;
        default:
        cout<<"choose the right option"<<endl;
        break;

    }
}
    while(option!=0);
return 0;
}