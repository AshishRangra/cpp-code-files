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
void removeDuplicate(Node *head)
{
    Node *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }
}
int main()
{
    Node *obj = new Node(1);

    obj->next = new Node(2);
    obj->next->next = new Node(2);
    obj->next->next->next = new Node(3);
    obj->next->next->next->next = new Node(3);
    obj->next->next->next->next->next = new Node(4);
    obj->next->next->next->next->next->next = new Node(5);
    display(obj);
    removeDuplicate(obj);
    cout << endl;
    display(obj);
    return 0;
}