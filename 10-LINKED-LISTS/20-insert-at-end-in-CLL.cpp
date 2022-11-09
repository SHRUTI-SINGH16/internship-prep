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

////TC=O(N)
// void insertEnd(Node* &head, int x){
//     Node* newNode = new Node(x);
//     Node* curr = head;
//     if(head == NULL){
//         newNode->next = newNode;
//         head = newNode;
//     }else{
//         while(curr->next!=head){
//             curr=curr->next;
//         }
//         curr->next = newNode;
//         newNode->next = head;
//     }
// }


//TC=O(1)
void insertEnd(Node* &head, int x){
    Node* newNode = new Node(x);
    if(head == NULL){
        newNode->next = newNode;
        head = newNode;
    }else{
        newNode->next = head->next;
        head->next = newNode;
        int temp = head->data;
        head->data = newNode->data;
        newNode->data = temp;
        head = newNode;

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
    
    return 0;
}