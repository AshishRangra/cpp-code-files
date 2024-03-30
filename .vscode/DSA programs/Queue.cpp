#include <iostream>
#include <queue>
using namespace std;
class Queue
{
public:
    int size;
    int *arr;
    int front;
    int rear;
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    int dequeue()
    {
        if (front == rear)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }
    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display()
    {
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            for (int i = front; i < rear; i++)
            {
                cout << arr[front] << " " << endl;
            }
        }
    }
    int frontEl()
    {
        if (rear == front)
        {
            return -1;
        }
        else
        {
            int ans = arr[front];
            return ans;
        }
    }
};
int main()
{
    queue<int> q;
    q.push(12);
    q.push(10);
    q.push(121);
    cout << "Size of queue" << q.size();
    q.pop();
    cout << "Size of queue" << q.size();
    cout << endl
         << endl;

    Queue obj(5);
    obj.enqueue(1);
    obj.enqueue(2);
    obj.enqueue(3);
    cout << obj.dequeue() << endl;
    cout << obj.dequeue() << endl;
    cout << obj.dequeue() << endl;
    cout << obj.isEmpty() << endl;
    obj.display();
    cout << obj.frontEl();
    return 0;
}