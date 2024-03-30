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
};
void insert(LL *&head, int data)
{
    LL *temp = new LL(data);
    temp->next = head;
    head = temp;
}
void display(LL *head)
{
    LL *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void reverse(LL *&head)
{
    LL *curr = head;
    LL *prev = NULL;
    LL *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
int main()
{

    LL *obj = new LL(1);
    LL *head = obj;
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    display(head);
    reverse(head);
    cout << endl;
    display(head);

    return 0;
}