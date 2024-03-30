#include <iostream>
using namespace std;

#define size 10

class Stack
{
public:
    int arr[size];
    int top;

    Stack()
    {
        top = -1;
    }

    void push(int data)
    {
        if (top >= size - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            arr[++top] = data;
            cout << data << " is pushed into Stack" << endl;
        }
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1; // Return a sentinel value to indicate an empty stack
        }
        else
        {
            int x = arr[top];
            cout << "Peek element is : " << x << endl;
            return x; // Return the peeked element
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return true;
        }
        else
        {
            cout << "Stack is not Empty" << endl;
            return false;
        }
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1; // Return a sentinel value to indicate an empty stack
        }
        else
        {
            int x = arr[top--];
            cout << "Pop element is : " << x << endl;
            return x; // Return the popped element
        }
    }
};

int main()
{
    Stack obj;
    obj.push(1);
    obj.push(2);
    obj.peek();
    obj.isEmpty();

    obj.pop();
    return 0;
}
