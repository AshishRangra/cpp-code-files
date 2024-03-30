#include <iostream>
using namespace std;
class Stack
{
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (top = -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if (top == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack overflow";
            // return 0;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is underflow";
            return 0;
        }

        else
        {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }
    int count()
    {
        return (top + 1);
    }
    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "Stack overflow";
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }
    void change(int val, int pos)
    {
        arr[pos] = val;
        cout << "Value is changed at location:  " << pos << endl;
    }
    void display()
    {
        cout << "All value in the stack are: ";
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    Stack obj;
    int option, position, value;
    do
    {
        cout << "Choose the operation ypu want to be done in stack";
        cout << "1.Push" << endl;
        cout << "2.Pop" << endl;
        cout << "3.isEmpty" << endl;
        cout << "4.isFull" << endl;
        cout << "5.peek" << endl;
        cout << "6.count" << endl;
        cout << "7.change" << endl;
        cout << "8.Display" << endl;
        cout << "9.clearscreen" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Enter an item to push in stack: " << endl;
            cin >> value;
            obj.push(value);
            break;
        case 2:
            cout << "Pop function called: " << obj.pop() << endl;
            break;
        case 3:
            if (obj.isEmpty())
            {
                cout << "Stack is Empty" << endl;
            }
            else
            {
                cout << "Stack is not Empty" << endl;
            }
            break;
        case 4:
            if (obj.isFull())
            {
                cout << "Stack is Full" << endl;
            }
            else
            {
                cout << "STack is not full" << endl;
            }
            break;
        case 5:
            cout << "Enter position of item ypu want to peek" << endl;
            cin >> position;
            cout << "Peek Function called" << position << endl
                 << obj.peek(position) << endl;
            break;
        case 6:
            cout << "Count function callled" << obj.count() << endl;
            break;
        case 7:
            cout << "Change function called" << endl;
            cout << "Enter position of item you want to change;";
            cin >> position;
            cout << endl;
            cout << "Enter value of item you want to change:";
            cin >> value;
            obj.change(position, value);
            break;
        case 8:
            cout << "Display function called" << endl;
            obj.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout << "ENter proper option number" << endl;
        }

    } while (option != 0);
    return 0;
}