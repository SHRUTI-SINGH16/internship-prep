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

void insertBegin(Node* &head,int x){
    Node* curr = new Node(x);
    curr->next=head;
    head=curr;

}

int search(Node* &head,int x){
    Node* temp = head;
    if(head==NULL){
        return -1;
    }
    if(temp->data==x){
        return 1;
    }
    int res = search(temp->next,x);
    if(res==-1){
        return -1;
    }else{
        return res+1;
    }
}

void traversal(Node* head){
    Node* curr = head;
    while(curr!= NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = NULL;
    insertBegin(head,10);
    insertBegin(head,20);
    insertBegin(head,30);
    insertBegin(head,40);
    insertBegin(head,50);
    insertBegin(head,60);
    cout<<search(head,60)<<endl;
    cout<<search(head,10)<<endl;
    cout<<search(head,80)<<endl;
    traversal(head);
    return 0;
}