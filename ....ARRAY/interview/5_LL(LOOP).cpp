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
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void detectRemoveLoop(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    slow = head->next;
    fast = head->next->next;
    while (slow != NULL)
    {
        if (slow == fast)
        {
            // // cout << "Loop is Present";
            break;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    if (slow == fast)
    {
        while (fast->next != slow)
        {
            fast = fast->next;
        }
    }
    // else
    // {
    //     while (slow->next != fast->next)
    //     {
    //         slow = slow->next;
    //         fast = fast->next;
    //     }
    // }
    fast->next = NULL;
}
int main()
{
    Node *obj = new Node(1);

    obj->next = new Node(2);
    obj->next->next = new Node(3);
    obj->next->next->next = new Node(4);

    obj->next->next->next->next = new Node(5);
    obj->next->next->next->next->next = obj;
    detectRemoveLoop(obj);
    display(obj);

    return 0;
}