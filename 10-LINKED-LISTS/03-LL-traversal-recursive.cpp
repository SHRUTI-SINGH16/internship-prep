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
    if(curr==NULL){
        return;
    }
    cout<<curr->data<<endl;
    traversal(curr->next);
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