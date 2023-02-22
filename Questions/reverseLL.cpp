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

void insertHead(int data, Node* &head){
    Node *temp = new Node(data);

    temp->next = head;
    head = temp;

}

void print(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* reverseKLL(Node* &head, int k){
    //find the node where count reaches k
    Node* curr = head;
    while()
    int cnt = 1;
    Node* last = curr;
    while(cnt<=k){
        last = last->next;
        cnt++;
    }

    Node* prev = NULL;
    Node* forw = head;

    while(curr!=last->next){
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
}

void ReverseLinkedListRecursion(Node* &head, Node* &curr, Node* &prev){
    if(curr==NULL){
        head =  prev;
        return;
    }
    else{
        Node* forward = curr->next;
        ReverseLinkedListRecursion(head, forward, curr);
        curr->next = prev;
    }
}

Node* ReverseLinkedList(Node* &head){
    Node *curr = head;
    Node *prev = NULL;
    Node *forw = NULL;
    while(curr!=NULL){
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }

    return prev;
}


int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;

    cout<<"Before Reversing the Linked Lists"<<endl;
    insertHead(20, head);
    insertHead(30, head);
    insertHead(40, head);
    insertHead(50, head);
    print(head);

    cout<<"After Reversing the Linked List"<<endl;
    Node* prev = NULL;
    ReverseLinkedListRecursion(head, head, prev);
    print(head);
}
