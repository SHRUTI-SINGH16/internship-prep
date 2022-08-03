#include<iostream>
using namespace std;

//swap the i and n-i-1 element till i<n/2
int reversearr(int arr[],int n){
    int temp = 0;
    for(int i=0;i<n/2;++i){
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    } 
    reversearr(arr,n);
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}