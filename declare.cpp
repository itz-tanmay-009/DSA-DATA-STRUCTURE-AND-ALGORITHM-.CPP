#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
private:
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = tail = NULL;
    }

    void enqueue(int data)
    {
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void dequeue()
    {
        if (head == NULL)
        {
            cout << "Queue is empty\n";
            return;
        }

        Node *temp = head;
        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
        }

        delete temp;
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "Queue is empty\n";
            return;
        }

        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();

    q.dequeue();
    q.display();
}