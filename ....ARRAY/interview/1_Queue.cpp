#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size, rear, front;
    Queue(int size)
    {
        this->size = size;
        front = 0;
        rear = 0;
        arr = new int;
    }

    bool isEmpty()
    {
        if (front == rear)
            return true;
        else
            return false;
    }
    void enqueue(int data)
    {
        if (rear == size)
            return;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    void dequeu()
    {
        if (front == -1 || front == rear)
        {

            cout << "Queue is Empty" << endl;
            return;
        } 
        else
        {
            int temp = arr[front];
            front++;
            cout << "Dequeue element is " << temp << endl;
        }
        return;
    }

    void
    display()
    {
        for (int i = front; i < rear; i++)
        {
            cout << arr[i] << " ";
            cout << endl;
        }
    }
};
int main()
{
    Queue obj(5);
    obj.enqueue(1);
    obj.enqueue(2);
    obj.enqueue(3);
    obj.enqueue(4);
    obj.display();
    obj.dequeu();
    obj.dequeu();
    obj.dequeu();
    obj.dequeu();
    obj.dequeu();
    return 0;
}