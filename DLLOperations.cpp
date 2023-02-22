#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

//display the linked list
void print(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

//get the lenght of the linked list 
int getLength(Node* &head){
    Node *temp = head;
    int length = 0;

    while(temp!=NULL){
        temp = temp->next;
        length++;
    }

    return length;
}

//insert at head
void insertAtHead(Node* &head, int data){
    Node *temp = new Node(data);

    temp->next = head;
    head->prev = temp;
    head = temp;

}

//insert at tail

void insertAtTail(Node* &head, int data){
    Node *temp = head;
    Node *node1 = new Node(data);

    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = node1;
    node1->prev = temp;
}

//insert at any position

void insertAtPosition(Node* &head, int position, int data){
    int cnt = 1;
    Node *temp = head;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    Node *node1 = new Node(data);
    nod

}
int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;

    cout<<getLength(head)<<endl;

    cout<<"After inserting at front"<<endl;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    print(head);

    cout<<"After inserting at rear"<<endl;
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    print(head);

}