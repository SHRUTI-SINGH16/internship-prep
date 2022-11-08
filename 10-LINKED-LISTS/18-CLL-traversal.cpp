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

void traverse(Node* &head){
    Node*temp = head;
    if(head==NULL){
        return;
    }
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
    // cout<<temp->data<<" ";
    // while(temp->next!=head){
    //     cout<<temp->next->data<<" ";
    //     temp = temp->next;
    // }
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
    
    return 0;
}