#include <iostream>

using namespace std;
class Q
{
public:
    int size;
    int *arr;
    int front;
    int rear;
    Q(int size)
    {
        this->size = size;
        arr = new int();
        front = rear = -1;
    }
    void Enq(int data)
    {
        if (front == 0 && rear == size - 1 && rear == (front - 1) % (size - 1))
        {
            cout << "Queue is full" << endl;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }
    int Pop()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
        }

        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }
    void display()
    {
        if (rear < front)
        {
            for (int i = 0; i < rear; i++)
            {
                cout << arr[i] << " ";
            }
            for (int i = 0; i < front; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {
            for (int i = front; i < rear; i++)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
};
int main()
{
    Q obj(5);
    obj.Enq(1);
    obj.Enq(1);
    obj.Enq(1);
    obj.Enq(1);
    obj.Enq(1);

    obj.display();
    obj.Pop();
    obj.Pop();
    obj.Pop();
    obj.display();
    return 0;
}