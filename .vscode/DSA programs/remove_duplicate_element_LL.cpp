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
void unsorted_LL(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    // map<Node *, bool> visited;

    // Node *curr = head;
    // Node *prev = NULL;
    // while (curr != NULL)
    // {
    //     if (visited[curr] = true)
    //     {
    //         cout << " IF" << curr->data;
    //         prev->next = curr;

    //         delete (curr);
    //         curr = curr->next;
    //     }

    //     cout << "ELSE" << curr->data;
    //     visited[curr] = true;
    //     prev = curr;
    //     curr = curr->next;
    // }
    // return;
    map<int, bool> visited;
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        if (visited[curr->data])
        {
            prev->next = curr->next;
            delete (curr);
            curr = prev->next;
        }
        else
        {
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }
    return;
}
void remove_Duplicate(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *curr = head;
    Node *nextnext;

    while (curr->next != NULL)
    {
        if (curr->data != curr->next->data)
        {
            curr = curr->next;
        }
        else if (curr->data == curr->next->data)
        {
            Node *nextnext = curr->next->next;

            free(curr->next);
            curr->next = nextnext;
        }
    }
    // cout << head;
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
    add(&head, 1);
    add(&head, 2);
    add(&head, 2);
    add(&head, 4);
    add(&head, 5);
    print(head);
    // remove_Duplicate(head);
    cout << endl;
    unsorted_LL(head);

    print(head);

    return 0;
}