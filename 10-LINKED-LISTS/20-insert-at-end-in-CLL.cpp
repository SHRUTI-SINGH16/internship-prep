#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void insertBegin(Node* &head, int x){
    Node* newNode = new Node(x);
    Node* temp = head;
    newNode = head;
    while(temp!=head){
        temp=temp->next;
    }
    temp->next = newNode;
    head = newNode;
}

void traverse(Node* &head){
    Node*temp = head;
    if(head==NULL){
        return;
    }
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
    cout<<endl;
}

int main(){
    Node* head;
    Node* temp = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    temp->next = temp1;
    temp1->next = temp2;
    temp2->next = temp;
    head = temp;
    traverse(head);
    insertBegin(head,50);
    insertBegin(head,60);
    traverse(head);
    
    return 0;
}