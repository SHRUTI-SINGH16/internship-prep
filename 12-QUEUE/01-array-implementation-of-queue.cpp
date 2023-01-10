#include<iostream>
using namespace std;

struct Queue{
    int front;
    int rear;
    int size;
    int *arr;

    Queue(int s){
        size = s;
        arr = new int[s];
        front = 0;
        rear = 0;
    }

    void enqueue(int x){
        if(isFull()==true){
            cout<<"Queue is full. Can't insert"<<endl;
        }else{
            arr[rear] = x;
            rear++;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Nothing to pop. queue is empty"<<endl;
        }else{
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if(isEmpty()){
                front = 0;
                rear = 0;
            }
            cout<<ans<<endl;
        }
    }

    int getFront(){
        if(isEmpty()){
            return -1;
        }else{
            return arr[front];
        }
    }

    int getRear(){
        if(isEmpty()){
            return -1;
        }else{
            return arr[rear];
        }
    }

    bool isFull(){
        return (rear==size);
    }

    bool isEmpty(){
        return (front == rear);
    }

    void print(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=front;i<rear;++i){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    int size;
    cin>>size;
    Queue que(size);
    que.enqueue(10);
    que.print();
    que.enqueue(20);
    que.print();
    que.enqueue(30);
    que.print();
    que.enqueue(40);
    que.print();
    que.dequeue();
    que.print();
    que.enqueue(50);
    que.print();
    que.enqueue(60);
    que.print();
    que.dequeue();
    que.print();
    que.dequeue();
    que.print();


    
    return 0;
}