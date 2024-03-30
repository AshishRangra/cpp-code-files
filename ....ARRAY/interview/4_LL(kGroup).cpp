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
LL *reverse(LL *&head, int k)
{
    LL *curr = head;
    LL *prev = NULL;
    LL *next = NULL;
    int currPos = 0;
    while (curr != NULL && currPos < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        currPos++;
    }
    if (next != NULL)
    {
        head->next = reverse(next, k);
    }
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
int main()
{

    LL *obj = new LL(1);
    LL *head = obj;
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 26);
    display(head);
    cout << endl;
    reverse(head, 3);
    display(head);

    return 0;
}