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

void insertBegin(Node* &head,int x){
    Node* curr = new Node(x);
    curr->next=head;
    head=curr;

}

void dellastnode(Node* &head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        head = NULL;
        delete head;
        return;
    }
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    temp->next = NULL;
    delete temp->next;
}

void traversal(Node* head){
    Node* curr = head;
    while(curr!= NULL){
        cout<<curr->data<<endl;
        curr=curr->next;
    }
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
    dellastnode(head);
    traversal(head);
    return 0;
}