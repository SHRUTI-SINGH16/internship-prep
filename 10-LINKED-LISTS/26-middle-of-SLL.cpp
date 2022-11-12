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

void middle(Node* &head){
    int count = 0;
    if(head==NULL){
        return;
    }
    Node* curr = head;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    curr = head; 
    for(int i=0;i<count/2;++i){
        curr=curr->next;
    }
    cout<<curr->data<<endl;

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
    insertEnd(head,40);
    insertEnd(head,50);
    insertEnd(head,60);
    middle(head);
    traversal(head);
    return 0;
}