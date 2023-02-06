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

struct MyStack{
    Node* head;
    int size;
    MyStack(){
        size = 0;
        head = NULL;
    }

    void push(int x){
        Node* temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }

   void pop(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
        }
        cout<<head->data<<endl;
        Node* temp = head;
        head = head->next;
        delete(temp);
        size--;
    }

    bool empty(){
        if(head==NULL){
            return true;
        }
        return false;
    }

    void peek(){
        if(head!=NULL){
            cout<<head->data<<endl;
        }else{
            cout<<"Stack is Empty"<<endl;
        }
    }
};
 
int main(){
    MyStack st;
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);
    st.peek();
    st.pop();
    st.peek();
    st.pop();
    st.peek();
    bool flag = st.empty();
    cout<<flag<<endl;
    return 0;
}