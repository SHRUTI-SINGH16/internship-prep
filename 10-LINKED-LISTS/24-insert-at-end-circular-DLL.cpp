#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void traverse(Node* &head){
    Node* curr = head;
    if(head==NULL){
        return;
    }
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);
    cout<<endl;
}

void insertEnd(Node* &head, int x){
    Node* newNode = new Node(x);
    if(head==NULL){
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
        return;
    }
    newNode->prev = head->prev;
    newNode->next = head;
    head->prev->next = newNode;
    head->prev = newNode;
    
}

int main(){
    Node* head = NULL;
    traverse(head);
    insertEnd(head,5);
    traverse(head);
    insertEnd(head,15);
    traverse(head);
    insertEnd(head,25);
    traverse(head);
    insertEnd(head,35);
    traverse(head);
    insertEnd(head,45);
    traverse(head);
    insertEnd(head,55);
    traverse(head);
    insertEnd(head,65);
    traverse(head);
    insertEnd(head,75);
    traverse(head);

    return 0;
}