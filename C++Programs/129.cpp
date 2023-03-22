#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define N 4

//by using extra space TC=O(N*M) SC=O(N*M) N AND M ARE rows and columns of the matrix
void multiply(int A[N][N], int B[N][N] ,int C[N][N]){
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// //by using extra space TC=O(N*M) SC=O(N*M) N AND M ARE rows and columns of the matrix
// void multiply(int A[N][N], int B[N][N]){
//     for(int i=0;i<N;++i){
//         for(int j=0;j<N;++j){
//             A[i][j] = A[i][j] + B[i][j];
//         }
//     }
// }

int main()
{
    int A[N][N] = { {1, 1, 1, 1}, 
                    {2, 2, 2, 2}, 
                    {3, 3, 3, 3}, 
                    {4, 4, 4, 4}}; 
  
    int B[N][N] = { {4, 1, 1, 1}, 
                    {2, 2, 2, 2}, 
                    {3, 3, 3, 3}, 
                    {4, 4, 4, 4}}; 
  
    // int C[N][N];
    // multiply(A, B, C); 
  
    // cout << "Result matrix is " << endl; 
    // for (int i = 0; i < N; i++) { 
    //     for (int j = 0; j < N; j++){
    //         cout << C[i][j] << " "; 
    //     }
    //     cout << endl; 
    // }


    multiply(A,B);
    cout << "Result matrix is " << endl; 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++){
            cout << A[i][j] << " "; 
        }
        cout << endl; 
    }
    return 0;
}