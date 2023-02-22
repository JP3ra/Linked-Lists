#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    //parametrised constructor 
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void insertAtPosition(int data, Node* &head, int position){
    int cnt = 1;
    Node *temp = head;
    Node *node1 = new Node(data);

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    node1->next = temp->next;
    temp->next = node1;
}

//insert at head
void insertHead(int data, Node* &head){
    Node *temp = new Node(data);

    temp->next = head;
    head = temp;

}

//insert at the end 
void insertTail(int data, Node* &head){
    Node *node1 = new Node(data);
    Node *temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = node1;
    node1->next = NULL;

}


//Delete at any given instant 

void deleteNode(int position, Node* &head){
    Node *temp =  head;
    Node *prevTemp = temp;
    int cnt = 1;
    while(cnt<position){
        prevTemp = temp;
        temp = temp->next;
        cnt++;
    }

    Node *node1 = new Node(temp->data);

    prevTemp->next = temp->next;
    free(node1);
    
}
//traversing and printing the linked list
void print(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);

    Node *head = node1;
    cout<<"Before inserting"<<endl;
    print(head);

    cout<<"After inserting at head"<<endl;
    insertHead(20, head);
    insertHead(30, head);
    print(head);

    cout<<"After inserting at tail"<<endl;
    insertTail(5, head);
    insertTail(15, head);
    print(head);

    cout<<"After inserting at a random position"<<endl;
    insertAtPosition(22, head, 4);
    print(head);

    cout<<"After deleting some random ndoe"<<endl;
    deleteNode(4, head);
    print(head);
}