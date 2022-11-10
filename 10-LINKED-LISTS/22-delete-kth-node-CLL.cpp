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


void insertEnd(Node* &head, int x){
    Node* newNode = new Node(x);
    Node* curr = head;
    if(head == NULL){
        newNode->next = newNode;
        head = newNode;
    }else{
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next = newNode;
        newNode->next = head;
    }
}

void delHead(Node* &head){
    Node* temp = head;
    if(head==NULL){
        return;
    }
    if(head->next == head){
        head = NULL;
        delete temp;
        return;
    }else{
        head->data = head->next->data;
        temp = temp->next;
        head->next = temp->next; 
        delete temp;
    }
}

//TC=O(k)
void delknode(Node* &head,int k){
    Node* temp = head;
    if(head==NULL){
        return;
    }
    if(k==1){
        delHead(head);
        return;
    }else{
        Node* curr = head;
        for(int i=0;i<k-2;++i){
            curr = curr->next;
        }
        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }
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
    Node* head = NULL;
    insertEnd(head,50);
    insertEnd(head,60);
    insertEnd(head,150);
    insertEnd(head,160);
    traverse(head);
    delknode(head,2);
    traverse(head);
    
    return 0;
}