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

void delfirstnode(Node* &head){
    if (head == NULL){
        return;
    }
    Node* temp = head;
    head = temp->next;
    delete temp;
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
    delfirstnode(head);
    traversal(head);
    return 0;
}