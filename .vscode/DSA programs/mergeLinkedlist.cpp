#include <iostream>
#include <bits/stdc++.h>
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
    ~Node()
    {
        int val = this->data;
        if (this->next = NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void add(Node **head, int d)
{
    Node *temp = new Node(d);
    temp->next = *head;
    ;
    *head = temp;
}
Node *Sorted(Node *head1, Node *head2)
{
    Node *result = NULL;

    if (head1 == NULL)
    {
        return (head2);
    }
    if (head2 == NULL)
    {
        return (head1);
    }
    if (head1->data <= head2->data)
    {
        result = head1;
        result->next = Sorted(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = Sorted(head1, head2->next);
    }
    return (result);
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *head2 = NULL;
    Node *res = NULL;

    add(&head, 1);
    add(&head, 2);
    add(&head, 2);
    add(&head2, 4);
    add(&head2, 5);
    print(head);
    // remove_Duplicate(head);
    cout << endl;
    // unsorted_LL(head);

    print(head2);
    res = Sorted(head, head2);
    cout << endl;
    print(res);

    return 0;
}