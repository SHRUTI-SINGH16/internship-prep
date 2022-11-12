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

void reverse(Node* &head){
    vector<int> data;
    Node* curr;
    for(curr = head;curr!=NULL;curr=curr->next){
        data.push_back(curr->data);
    }
    for(curr = head;curr!=NULL;curr=curr->next){
        curr->data = data.back();
        data.pop_back();
    }
}



int main(){
    Node* head = NULL;
    insertEnd(head,10);
    insertEnd(head,20);
    insertEnd(head,30);
    insertEnd(head,40);
    insertEnd(head,50);
    insertEnd(head,60);
    traversal(head);
    reverse(head);
    traversal(head);
    return 0; 
}