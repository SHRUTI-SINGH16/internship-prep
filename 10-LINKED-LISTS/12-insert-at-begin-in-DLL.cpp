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
    return 0;
}