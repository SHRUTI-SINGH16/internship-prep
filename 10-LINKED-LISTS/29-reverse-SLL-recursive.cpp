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

void reverseLL(Node* &head, Node* curr, Node* prev){
    //base case
    if(curr==NULL){
        head = prev;
        return;
    }
    Node* next = curr->next;
    curr->next = prev;
    reverseLL(head, next, curr);
}

//TC=O(N) SC=O(N)
Node* reverse(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    reverseLL(head, curr, prev);
    return head;
}

// //TC=O(N) SC=O(N)
// Node* reverse(Node* &head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     Node * rev_head = reverse(head->next);
//     Node* rev_tail = head->next;
//     rev_tail->next = head;
//     head->next = NULL;
//     return rev_head;
// }

int main(){
    Node* head = NULL;
    insertEnd(head,10);
    insertEnd(head,20);
    insertEnd(head,30);
    insertEnd(head,40);
    insertEnd(head,50);
    insertEnd(head,60);
    traversal(head);
    head = reverse(head);
    traversal(head);
    return 0; 
}