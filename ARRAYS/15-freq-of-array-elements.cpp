#include<bits/stdc++.h>
using namespace std;

//TC=O(N)
void freq(int arr[],int n){
    int temp = arr[0];
    int count = 1;
    for(int i=1;i<n;++i){
        if(temp==arr[i]){
            count++;
        }else{
            cout<<temp<<" "<<count<<endl;
            temp = arr[i];
            count = 1;
        }
    }
    cout<<temp<<" "<<count<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    } 
    freq(arr,n);
    
    return 0;
}