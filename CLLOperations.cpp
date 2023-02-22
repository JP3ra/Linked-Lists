#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }

        cout<<"Memory is free with data value"<<value<<endl;
    }
}

//insert at head
void insertAtHead(int data, Node* &head){
    Node *temp = new Node(data);
    Node *lastNode = head;
    while(lastNode->next!=NULL){
        lastNode = lastNode->next;
    }

    temp->next = head;
    head = temp;
    lastNode->next = head;
}
int main()
{
 return 0;
}