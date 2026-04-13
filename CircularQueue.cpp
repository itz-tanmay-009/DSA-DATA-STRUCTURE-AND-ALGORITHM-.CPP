#include <iostream>
using namespace std;

class CircularQueue
{
    int *arr;
    int current_size, cap;
    int front, rear;

public:
    CircularQueue(int size)
    {
        cap = size;
        arr = new int[cap];
        front = 0;
        rear = -1;
        current_size = 0;
    }

    void enqueue(int data)
    {
        if (current_size == cap)
        {
            cout << "Queue is full\n";
            return;
        }
        rear = (rear + 1) % cap;
        arr[rear] = data;
        current_size++;
    }

    void display()
    {
        if (current_size == 0)
        {
            cout << "Queue is empty\n";
            return;
        }

        int i = front;
        cout << "Queue elements: ";

        for (int count = 0; count < current_size; count++)
        {
            cout << arr[i] << " ";
            i = (i + 1) % cap;
        }
        cout << endl;
    }
};

int main()
{
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    return 0;
}