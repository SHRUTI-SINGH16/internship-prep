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


// //TC=O(N)
// void insertBegin(Node* &head, int x){
//     Node* newNode = new Node(x);
//     Node* temp = head;
//     if(head == NULL){
//         newNode->next = newNode;
//     }else{
//         while(temp->next!=head){
//             temp=temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = head;
//     }
//     head = newNode;
// }

//TC=O(1)
void insertBegin(Node* &head, int x){
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
    insertBegin(head,50);
    insertBegin(head,60);
    insertBegin(head,150);
    insertBegin(head,160);
    traverse(head);
    
    return 0;
}