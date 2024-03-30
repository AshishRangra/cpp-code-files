#include <iostream>
using namespace std;
class LL
{
public:
    int data;
    LL *next;
    // LL(int data)
    // {
    //     this->data = data;
    //     next = NULL;
    // }
};
void add(LL **head, int d)
{
    LL *temp = new LL();
    temp->data = d;
    temp->next = *head;
    *head = temp;
}
LL* reverseLL_k(LL *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
      LL *curr = head;

    LL *prev = NULL;
  
    LL *next = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
    {
        head->next = reverseLL_k(next, k);
    }
    // cout<<prev;
    return prev;
}

void display(LL *temp)
{

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    LL *head = NULL;

    add(&head, 9);
    add(&head, 8);
    add(&head, 7);
    add(&head, 6);
    add(&head, 55);
    add(&head, 4);
    add(&head, 3);

    add(&head, 2);
    add(&head, 1);
    display(head);
    head=reverseLL_k(head, 3);
    cout << endl;
    display(head);
    return 0;
}