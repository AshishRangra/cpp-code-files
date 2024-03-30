#include <iostream>
using namespace std;
class Queue
{
public:
    int size;
    int rear, front;
    int *arr;
    Queue(int size)
    {
        this->size = size;

        arr = new int;
        rear = front = -1;
    }
    bool isFull()
    {
        if (front == 0 && rear == size - 1)
            return true;
        else
            return false;
    }
    bool isEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }
    void insertAtFront(int data)
    {
        if (isFull())
            return;
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (front == 0)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = data;
        cout << "Enqueue element is " << arr[front] << endl;
    }
    void insertAtRear(int data)
    {
        if (isFull())
        {
            cout << "Queue is Full" << endl;
            return;
        }
        else if (rear == -1)
        {
            rear = front = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
        cout << "Enqueue element is " << arr[rear] << endl;
    }
    void delAtFront()
    {
        if (isEmpty())
        {
            return;
        }
        int temp = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = 0;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    void delAtRear()
    {
        if (isEmpty())
            return;
        int temp = arr[rear];
        arr[rear] = -1;

        if (rear == front)
            rear = front = -1;
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
            rear--;

        // delete (temp);
    }
    void display()
    {
        if (isEmpty())
            return;
        cout << endl;
        for (int i = 0; i < size; i++)
        {

            cout << arr[i] << "  ";
        }
    }
};

int main()
{
    Queue obj(4);
    obj.insertAtRear(1);
    obj.insertAtRear(3);
    obj.insertAtFront(4);
    obj.insertAtFront(2);
    // obj.display();
    cout << obj.isEmpty() << endl;

    cout << obj.isFull();
    obj.delAtFront();
    obj.delAtRear();
    obj.display();
    return 0;
}