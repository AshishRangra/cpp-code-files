#include <iostream>
using namespace std;
class LL
{
public:
    int data;
    LL *next;
    LL(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~LL()
    {

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void insert(LL *&head, int d)
{
    LL *temp = new LL(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(LL *&tail, int d)
{
    LL *temp = new LL(d);
    tail->next = temp;
    tail = tail->next;
}
void insertAtPos(LL *&head, int pos, int d)
{
    LL *temp = new LL(d);
    if (pos == 0)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        LL *prev = NULL;
        LL *curr = head;
        int currentPos = 1;
        while (curr != NULL && currentPos < pos)
        {
            prev = curr;
            curr = curr->next;
            currentPos++;
        }
        temp->next = curr;
        prev->next = temp;
    }
}
void deleteNode(LL *&head, int pos)
{
    if (pos == 1)
    {
        LL *temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        LL *curr = head;
        LL *prev = NULL;
        int currPos = 1;
        while (curr != NULL && currPos < pos)
        {
            prev = curr;
            curr = curr->next;
            currPos++;
        }

        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
        return;
    }
}
void display(LL *head)
{
    LL *temp = head;
    if (head == NULL)
    {
        cout << "List empty" << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    LL *obj = new LL(1); // main linkedlist
    LL *head = obj;      // join with main linkedlist
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    LL *tail = obj; // join with main linked list
    insertAtTail(tail, 7);

    insertAtPos(head, 3, 11);
    display(head);
    deleteNode(head, 3);
    cout<<endl;
    display(head);
    return 0;
}