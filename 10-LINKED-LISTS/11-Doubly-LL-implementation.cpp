#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

int main(){
    Node* head;
    Node* temp = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    head = temp;
    temp->next = temp1;
    temp1->next = temp2;
    temp1->prev = temp;
    temp2->prev = temp1;

    return 0;
}