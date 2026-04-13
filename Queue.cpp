#include<iostream>
using namespace std;

class Queue{
    private:
    int arr[100];
    int front;
    int rear;
    public:
    Queue(){
        front = -1;
        rear = -1;
    }
    void enqueue(int value){
        if(rear == 99){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        if(front==-1)
        front=0;
        arr[++rear]=value;
        cout<<value<<"inserted into queue"<<endl;
    }
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow<<endl";
            return;
        }
        cout << arr[front++] << " removed from queue<<endl";
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty<<endl";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); 

    q.display();

    return 0;
}