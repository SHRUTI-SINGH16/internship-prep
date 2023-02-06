#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct MyStack{
    int top;
    int *arr;
    int size;

    MyStack(int siz){
        top = -1;
        size = siz;
        arr = new int[size];
    }

    void push(int x){
        if(top<size-1){
            ++top;
            arr[top] = x;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }

   void pop(){
        if(top>-1){
            int popped_elem = arr[top];
            top--;
            cout<<popped_elem<<endl;
        }else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    bool empty(){
        if(top==-1){
            return true;
        }
        return false;
    }

    void peek(){
        if(top>=0){
            cout<<arr[top]<<endl;
        }else{
            cout<<"STack is Empty"<<endl;
        }
    }
};
 
int main(){
    MyStack st(10);
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