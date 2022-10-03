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

void insertPos(Node* &head,int pos, int x){
    Node* newNode = new Node(x);
    if(pos==1){
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for(int i=1;i<=pos-2;++i){
        if(temp!=NULL){
            temp=temp->next;
        }
    }
    if(temp==NULL){
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
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
    insertPos(head,2,80);
    insertPos(head,1,90);
    insertPos(head,11,180);
    insertPos(head,9,180);
    traversal(head);
    return 0;
}