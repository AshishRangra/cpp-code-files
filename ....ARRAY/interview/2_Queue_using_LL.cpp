#include <iostream>
using namespace std;
class Queue
{
public:
    int data;
    Queue *next, *rear, *front;
    Queue(int data)
    {
        this->data = data;
        rear = front = NULL;
        next = NULL;
    }
};
void enqueue(Queue *&rear, Queue *&front, int data)
{
    Queue *temp = new Queue(data);
    if (rear == NULL)
    {
        front = rear = temp;
    }
    rear->next = temp;
    rear = temp;
}
int dequeue(Queue *&rear, Queue *&front)
{
    if (front == NULL)
    {
        return -1;
    }
    Queue *temp = front;
    front = front->next;
    if (front == NULL)
        rear = NULL;

    delete temp;
    return temp->data;
}
void display(Queue *&front)
{
    Queue *temp = front;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Queue *obj = new Queue(12);
    Queue *rear = obj;
    Queue *front = obj;

    enqueue(rear, front, 1);
    enqueue(rear, front, 2);
    enqueue(rear, front, 3);
    enqueue(rear, front, 4);
    display(front);
    cout << endl;
    dequeue(rear, front);
    display(front);
    delete obj;
    return 0;
}