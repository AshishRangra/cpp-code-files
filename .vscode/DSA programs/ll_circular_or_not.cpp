#include <iostream>
#include <map>
using namespace std;
class Linkedlist
{
public:
    int data;
    Linkedlist *next;
    Linkedlist(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Linkedlist()
    {
        int value = this->data;
        if (this->next == NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void insertAtHead(Linkedlist *&head, int data)
{
    Linkedlist *temp = new Linkedlist(data);
    temp->next = head;
    head = temp;
}
void display(Linkedlist *&head)
{
    Linkedlist *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtTail(Linkedlist *&tail, int data)
{
    Linkedlist *temp = new Linkedlist(data);
    tail->next = temp;
    tail = tail->next;
}
void insertAtPos(Linkedlist *&head, Linkedlist *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    int count = 1;
    Linkedlist *temp = head;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    Linkedlist *node = new Linkedlist(data);
    node->next = temp->next;
    temp->next = node;
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
}
void deletePos(Linkedlist *&head, int pos)
{
    if (pos == 1)
    {
        Linkedlist *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Linkedlist *curr = head;
        Linkedlist *prev = NULL;
        int count = 1;
        while (count < pos)
        {
            /* code */
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
bool detectLoop(Linkedlist *head)
{
    map<Linkedlist *, bool> visited;
    if (head == NULL)
    {

        return false;
    }
    Linkedlist *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] = true)
        {
            // cout << "Present on element" << temp->data;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    cout << "false";
    return false;
}
bool isCircular(Linkedlist *head)
{
    if (head == NULL)
        return NULL;

    Linkedlist *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Dd";
        return false;
    }
    if (temp == head)
    {
        cout << "a";
        return true;
    }
}
int main()
{
    Linkedlist *obj = new Linkedlist(21);

    cout << obj->data << endl;
    cout << obj->next << endl;
    Linkedlist *head = obj;
    insertAtHead(head, 29);
    cout << endl;
    display(head);
    insertAtHead(head, 299);
    cout << endl;
    display(head);
    insertAtHead(head, 28);
    cout << endl;
    display(head);
    insertAtHead(head, 291);
    cout << endl;
    display(head);
    Linkedlist *tail = obj;
    insertAtTail(tail, 100);
    display(tail);
    insertAtPos(head, tail, 4, 222);
    display(head);
    insertAtPos(head, tail, 1, 222);
    display(head);
    insertAtPos(head, tail, 6, 222);
    display(head);
    //  insertAtPos(head, tail, 4, 222);
    // display(head);
    //    deletePos(tail, 1);
    display(head);
    isCircular(head);
    cout << endl;
    cout << detectLoop(head);
    return 0;
}