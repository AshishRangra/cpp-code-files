#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insert(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insert_tail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(100);
    // cout<<node1->data<<endl;

    // cout<<node1->next<<endl;
    Node *head = node1;
    insert(head, 32);
    display(head);
    // Node* tail=node1;
    // insert(head,120);

    // insert_tail(tail,120);
    // display(tail);

    // display(head);
    // insert_tail(tail,130);
    // display(tail);

    // display(head);
    // insert_tail(tail,140);
    // display(tail);
    return 0;
}
