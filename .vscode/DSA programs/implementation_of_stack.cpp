#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;
    Stack(int size)
    {
        this->size = size;

        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is Full" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            int x = arr[top--];
            cout << x << endl;
        }
        else
        {
            cout << "Stack is Empty" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            cout << arr[top];
            return 0;
        }
        else
        {
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top >= 0)
        {
            return false;
        }
        else
        {
            return false;
        }
    }
    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[top] << " ";
            top--;
        }
        cout << endl;
    }
};
int main()
{
    Stack obj(4);
    obj.push(54);
    obj.push(32);
    obj.push(12);
    obj.push(33);
    obj.display();
    obj.pop();
    // obj.display();
    // // obj.pop();
    // // obj.display();
    cout << obj.peek();
    // obj.isEmpty();
    return 0;
}