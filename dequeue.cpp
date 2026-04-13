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
    void enqueue(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void dequeue()
    { // this operation always happens from front
        if (head == NULL)
        {
            cout << "Queue is empty";
            return;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        if (head == NULL)
        {
            tail = NULL; // this is bcz after deletion it will still point toward deleted memory of Node tail
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
}