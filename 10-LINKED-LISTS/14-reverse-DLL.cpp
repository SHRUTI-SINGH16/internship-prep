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

void insertBegin(Node* &head,int x){
    Node* temp = head;
    Node* newNode = new Node(x);
    newNode->next = temp;
    if(head!=NULL){
        temp->prev = newNode;
    }
    head = newNode; 
    
}

void reverse(Node* &head){
    Node* temp = head;
    Node* x = NULL;
    if(head==NULL || head->next==NULL){
        return;
    }
    while(temp!=NULL){
        x = temp->next;
        temp->next = temp->prev;
        temp->prev = x;
        temp = temp->next;
    }
    head = temp;
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
    insertBegin(head,10);
    insertBegin(head,20);
    insertBegin(head,30);
    traversal(head);
    reverse(head);
    traversal(head);
    return 0;
}