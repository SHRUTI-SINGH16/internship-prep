#include<iostream>
#include<bits/stdc++.h>
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

void traversal(Node* &head){
    Node* curr = head;
    while(curr!= NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

void removeDuplicate(Node* &head){
    Node* curr = head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }else{
            curr=curr->next;
        }
    }
}

int main(){
    Node* head = NULL;
    insertEnd(head,10);
    insertEnd(head,10);
    insertEnd(head,10);
    insertEnd(head,20);
    insertEnd(head,20);
    insertEnd(head,30);
    traversal(head);
    removeDuplicate(head);
    traversal(head);
    return 0; 
}