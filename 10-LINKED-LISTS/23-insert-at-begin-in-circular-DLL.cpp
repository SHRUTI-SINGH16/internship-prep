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

void insertBegin(Node* &head, int x){
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
    head = newNode;
}

int main(){
    Node* head = NULL;
    insertBegin(head,5);
    insertBegin(head,15);
    insertBegin(head,25);
    insertBegin(head,35);
    traverse(head);
    insertBegin(head,45);
    insertBegin(head,55);
    insertBegin(head,65);
    insertBegin(head,75);
    traverse(head);

    return 0;
}