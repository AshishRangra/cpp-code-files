// #include<iostream>
// using namespace std ;
// class Node{
//   public:
//   int data;
//     Node* next;

//    Node(int data){
//     this->data=data;
//     this->next=NULL;
//    }
// };
// void insert(Node* &head,int d){
//     Node* temp=new Node(d);
//     temp->next=head;
//     head=temp;

// }
// void insert_tail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail->next=temp;
//     tail=tail->next;

// }
// void display(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;

//     }
//     cout<<endl;
// }
// int main()
// {
// Node* node1=new Node(100);
// // cout<<node1->data<<endl;

// // cout<<node1->next<<endl;
// Node* head=node1;
// Node* tail=node1;
// // insert(head,120);
// display(head);
// insert_tail(tail,120);
// display(tail);

// display(head);
// insert_tail(tail,130);
// display(tail);


// display(head);
// insert_tail(tail,140);
// display(tail);
// return 0;
// }

#include<iostream>
using namespace std ;
class Ll{
    public:
    int data;
    Ll* next;
    Ll(int data){
        this->data=data;
        this->next=NULL;

    }
};
void insert_node_at_head(Ll* &head,int d){

    Ll* temp=new Ll(d);
    temp->next=head;
    head =temp;
}
void insert_node_at_tail(Ll* &tail,int d){
Ll* temp=new Ll(d);
    tail->next=temp;
    tail=temp;
}
void insert_at_randomPosition(Ll* &head,int position,int d){
   if(position==1){
    insert_node_at_head(head,d);
    return;
   }
   
   
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    Ll* nodeToinsert=new Ll(d);
    temp->next=nodeToinsert;

}
void del(Ll* &head,Ll* &tail,int d){
Ll* temp;

}
void display(Ll* &head){
 Ll* temp=head;
 while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
 }

}
int main()
{
 Ll* obj=new Ll(10);
 
 Ll* head=obj;
 Ll* tail=obj; 
//  Ll* head=obj; 
insert_node_at_tail(tail,120);
display(tail); 
insert_node_at_tail(tail,130);
display(tail);
insert_node_at_head(head,140);
display(head);
insert_node_at_tail(tail,150);
display(tail);
insert_node_at_tail(tail,160);
display(tail);
insert_node_at_tail(tail,180);
display(tail);
cout<<endl;
insert_at_randomPosition(head,5,27);
display(head);
return 0;
}