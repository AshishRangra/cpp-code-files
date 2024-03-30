#include <iostream>
using namespace std;
class Stack
{
public:
    int data;
    Stack *next;
    Stack *top;
    Stack(int data)
    {
        this->data = data;
        this->next = NULL;
        top = NULL;
    }
    void insert(int data)
    {
        Stack *temp = new Stack(data);
        temp->next = top;
        top = temp;
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            Stack *temp = top;
            top = top->next;
            delete temp;
        }
    }
    void peek()
    {
        if (top == NULL)
            cout << "Empty" << endl;
        else
        {
            cout << top->data << endl;
        }
    }
    bool isEmpty()
    {
        if (top == NULL)
            return true;
        else
            return false;
    }
    void display()
    {
        Stack *temp = top;
        while (temp != NULL)

        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    Stack *obj = new Stack(1);
    obj->insert(5);
    obj->peek();
    obj->pop();
    obj->peek();
    obj->insert(9);
    obj->insert(53);
    obj->insert(52);
    obj->insert(51);
    obj->display();
    return 0;
}