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

// delete node without head
void deleteNode(LL *nodetoDelete)
{
    LL *temp = nodetoDelete->next;
    nodetoDelete->data = temp->data;
    nodetoDelete->next = temp->next;
    delete temp;
}
void MiddleOfLL(LL *head)
{
    int count = 0;
    LL *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    if (count == 0)
    {
        cout << "The list is empty." << endl;
    }

    int middle = count / 2;
    temp = head;

    for (int i = 0; i < middle; i++)
    {
        temp = temp->next;
    }

    cout << temp->data;
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
    insert(head, 6);
    display(head);
    cout << endl;
    MiddleOfLL(head);
    LL *head2 = head;
    cout << endl;
    deleteNode(head2);
    display(head);
    return 0;
}
