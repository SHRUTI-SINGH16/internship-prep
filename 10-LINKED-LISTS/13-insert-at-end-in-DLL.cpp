#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void insertEnd(Node* &head,int x){
    Node* temp = head;
    Node* newNode = new Node(x);
    if(head==NULL){
        head = newNode;
        return;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void traversal(Node* &head){
    Node* curr = head;
    while(curr!= NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    insertEnd(head,10);
    insertEnd(head,20);
    insertEnd(head,30);
    traversal(head);
    
    return 0;
}