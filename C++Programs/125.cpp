#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define N 4

bool areSame(int a[N][N], int b[N][N]){
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            if(a[i][j]!=b[i][j]){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int A[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 7, 3},
                    {4, 4, 4, 4}};
  
    int B[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};
  
    if (areSame(A, B))
        cout << "Matrices are identical";
    else
        cout << "Matrices are not identical";
    return 0;
    return 0;
}