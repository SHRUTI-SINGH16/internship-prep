#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define N 4

// //by using extra space TC=O(N*M) SC=O(N*M) N AND M ARE rows and columns of the matrix
// void transpose(int a[N][N], int b[N][N]){
//     for(int i=0;i<N;++i){
//         for(int j=0;j<N;++j){
//             b[i][j] = a[j][i];
//         }
//     }
// }

//without using extra space TC=O(N*M) SC=O(1) N AND M ARE rows and columns of the matrix
void transpose(int a[N][N]){
    for(int i=0;i<N;++i){
        for(int j=i+1;j<N;++j){
            swap(a[i][j],a[j][i]);
        }
    }
}


int main(){
    int A[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 7, 3},
                    {4, 4, 4, 4}};
    //int B[N][N];
    // transpose(A,B);   //with extra space
    // for(int i=0;i<N;++i){             //with extra space
    //     for(int j=0;j<N;++j){
    //         cout<<B[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    transpose(A);
    for(int i=0;i<N;++i){             //with extra space
        for(int j=0;j<N;++j){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}