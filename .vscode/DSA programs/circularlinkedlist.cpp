
#include <iostream>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data" << val << endl;
    }
};

void InsertAtTail(Node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    }

    while (tail != temp);
    cout << endl;
}
bool detectLoop(Node *head)
{
    map<Node *, bool> visited;
    if (head == NULL)
    {

        return false;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] = true)
        {
            cout << "Present on element" << temp->data;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    cout << "false";
    return false;
}
bool isCircular(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "NO";
        return false;
    }
    if (temp == head)
    {
        cout << "yes";
        return true;
    }
}
Node *flo(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            // cout << "Present";
            return slow;
        }
    }
}
Node *StrtingNode(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *intersection = flo(head);
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    cout << slow->data;
    return slow;
}
Node *removeLOOp(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *Start = StrtingNode(head);
    Node *temp = Start;
    while (temp->next != Start)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
int main()
{
    Node *tail = NULL;
    // Node* head=NULL;

    InsertAtTail(tail, 5, 1);
    print(tail);
    InsertAtTail(tail, 1, 12);
    print(tail);
    InsertAtTail(tail, 12, 11);
    print(tail);
    // cout << detectLoop(tail) << endl;

    flo(tail);
    // cout << endl;
    cout << StrtingNode(tail)->data << endl;
    removeLOOp(tail);
    cout << endl;
    cout << isCircular(tail);

    return 0;
}