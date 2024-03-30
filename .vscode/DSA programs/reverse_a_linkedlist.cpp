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
        next = NULL;
    }
};

// void reverse(LL *&head, LL *curr, LL *prev)
// {
//     if (curr == NULL)
//     {
//         head = prev;
//         return;
//     }
//     LL *forward = curr->next;
//     reverse(head, forward, curr);
//     curr->next = prev;
// }
// LL *reverseLL(LL *head)
// {
//     LL *curr = head;
//     LL *prev = NULL;
//     reverse(head, curr, prev);
//     return head;
// }
class Linke
{

public:
    LL *head;
    Linke()
    {
        head = NULL;
    }
    void add(int d)
    {

        LL *node = new LL(d);
        node->next = head;
        head = node;
    }
    void reverseLL()
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

    void display()
    {
        LL *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main()
{

    Linke obj;
    obj.add(1);
    obj.add(2);
    obj.add(3);
    obj.add(4);
    obj.add(5);
    obj.add(6);
    obj.add(7);
    obj.add(8);
    obj.display();
    obj.reverseLL();
    cout << endl;
    obj.display();
    return 0;
}