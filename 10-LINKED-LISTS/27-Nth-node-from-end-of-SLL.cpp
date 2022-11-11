#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void insertEnd(Node* &head,int x){
    Node* curr = new Node(x);
    Node* temp = head;

    if(head==NULL){
        head = curr;
        return;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = curr;
}

void nthnode(Node* &head, int x){
    
}

void traversal(Node* &head){
    Node* curr = head;
    while(curr!= NULL){
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}

int main(){
    int x;
    cin>>x;
    Node* head = NULL;
    insertEnd(head,10);
    insertEnd(head,20);
    insertEnd(head,30);
    insertEnd(head,40);
    insertEnd(head,50);
    nthnode(head,x);
    traversal(head);
    return 0;
}