#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct Queue{
    Node* front;
    Node* rear;
    int size;
    Queue(){
        front = NULL;  //dequeue happens here
        rear = NULL;   //enque happens here
        size = 0;
    }

    void enque(int x){
        Node* temp = new Node(x);
        if(front==NULL){
            front = temp;
            rear = temp;
        }
        rear->next = temp;
        rear = temp;
        size++;
    }

    void deque(){
        if(front==rear){
            return;
        }
        Node* temp = front;
        front = front->next;
        if(front==NULL){
            rear=NULL;
        }
        delete(temp);
        size--;
    }

    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }

    void traverse(){
        Node* temp = front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    int getsize(){
        return size;
    }

    int getfront(){
        return front->data;
    }

    int getrear(){
        return rear->data;
    }


};


int main(){
    Queue que;
    bool ans = que.empty();
    cout<<ans<<endl;
    que.enque(5);
    que.enque(10);
    que.enque(15);
    que.enque(20);
    que.traverse();
    que.enque(25);
    que.deque();
    que.enque(30);
    que.enque(35);
    que.enque(40);
    que.deque();
    ans = que.empty();
    cout<<ans<<endl;
    que.traverse();
    int siz = que.getsize();
    cout<<siz<<endl;
    int ffront = que.getfront();
    cout<<ffront<<endl;
    int rrear = que.getrear();
    cout<<rrear<<endl;

    return 0;
}