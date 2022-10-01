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

int main(){
    
    Node* head;
    Node* temp = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);

    temp -> next = temp1;
    temp1 -> next = temp2;
    head = temp;
    
    cout<<temp->next<<endl;
    cout<<temp1->next<<endl;
    cout<<temp2->next<<endl;
    cout<<head<<endl;
    cout<<temp->data<<endl;
    cout<<temp1->data<<endl;
    cout<<temp2->data<<endl;
    return 0;
}