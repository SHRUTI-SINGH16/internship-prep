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

void traversal(Node* &head){
    Node* curr = head;
    while(curr!= NULL){
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}

int main(){
    Node* head;
    Node* temp = new Node(10);
    temp->next = new Node(20);
    temp->next->next = new Node(30);
    temp->next->next->next = new Node(40);
    head = temp;
    traversal(head);
    return 0;
}