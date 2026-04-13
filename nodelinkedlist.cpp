#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class LinkedList{
    private:
    Node* head;
    public:
    LinkedList(){
        head = NULL;
    }
    
    void insertAtBegining(int data){
        Node *NewNode = new Node(data);
        if(head == NULL){
            head = NewNode;
            return;
        }
        else{
            NewNode->next = head;
            head->prev = NewNode;
            head = NewNode;
        }
    }
};

int main(){
    Linkedlist
    return 0;
}