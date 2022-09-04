#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// //TC-O(nd) SC=O(1)
// //left rotate by 1 , d times
// void rotatearr(int arr[],int n){
//     int temp = arr[0];
//     for(int i=0;i<n-1;++i){
//         arr[i] = arr[i+1];
//     }
//     arr[n-1] = temp;
// }

// void rotatearrbyd(int arr[],int n,int d){
//     for(int i=0;i<d;++i){
//         rotatearr(arr,n);
//     }
    
// }



// //TC-O(N) but SC=O(d);
// //make a temp array for first d elements
// void rotatearrbyd(int arr[],int n,int d){
//     int temp[d];
//     for(int i=0;i<d;++i){
//         temp[i] = arr[i];
//     }
//     for(int i=d;i<n;++i){
//         arr[i-d] = arr[i];
//     }
//     for(int i=0;i<d;++i){
//         arr[n-d+i] = temp[i];
//     }
// }


//TC=O(N) and SC=O(1);
//using reverse operation;
//1)reverse 0 to d-1 elements;
//2)reverse dto n-1 elements
//3) reverse the whole array
int reversearr(int arr[],int low, int high){
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

void rotatearrbyd(int arr[],int n,int d){
    reversearr(arr,0,d-1);
    reversearr(arr,d,n-1);
    reversearr(arr,0,n-1);
}



int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    } 
    rotatearrbyd(arr,n,d);
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}