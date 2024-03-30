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
    cout << endl;
}
Node *mergeLL(Node *head1, Node *head2)
{
    if (head1 == NULL)
        return head1;
    if (head2 == NULL)
        return head2;
    Node *res = NULL;
    if (head1->data <= head2->data)
    {
        res = head1;
        res->next = mergeLL(head1->next, head2);
    }
    else
    {
        res = head2;
        res->next = mergeLL(head1, head2->next);
    }
    return res;
}
int main()
{
    Node *link1 = new Node(1);
    link1->next = new Node(3);
    link1->next->next = new Node(5);
    link1->next->next->next = new Node(7);

    Node *link2 = new Node(2);
    link2->next = new Node(4);
    link2->next->next = new Node(6);
    link2->next->next->next = new Node(8);
    display(link1);
    display(link2);
    Node *res;

    res = mergeLL(link1, link2);
    display(res);
    return 0;
}
