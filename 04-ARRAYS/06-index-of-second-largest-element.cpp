#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//simplest solution
//sort the array and output the n-2th element


//without sorting
//first find the largest element then again traverse the array and find the largest element
//provided that it is not equal to the largest element
//2 traversals needed

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;++i){
//         cin>>arr[i];
//     }
//     int maximum = INT_MIN;
//     int ans = 0;
//     for(int i=0;i<n;++i){
//         if(arr[i]>=maximum){
//             maximum = arr[i];
//             ans = i;
//         }
//     }
//     int ans1 = -1;
//     int maxiscnd = INT_MIN;
//     for(int i=0;i<n;++i){
//         if(arr[i]!=maximum){
//             if(arr[i]>=maxiscnd){
//                 maxiscnd = arr[i];
//                 ans1 = i;
//             }
//         }
//     }
//     if(ans1==-1){
//         cout<<"No Second Largest element "<<endl;
//     }else{
//         cout<<"Second Largest element "<<maxiscnd<<" is present at : "<<ans1<<endl;
//     }
    

//     return 0;
// }


//single traversal solution

int secondlargest(int arr[], int n){
    int largest = arr[0];
    int res = -1;
    int ans1 = -1;
    for(int i=1;i<n;++i){
        if(arr[i]>largest){
            res = largest;
            largest = arr[i];
            ans1 = i-1;
        }else if(arr[i]<largest){
            if(arr[i]>res){
                res = arr[i];
                ans1 = i-1;
            }
            
        }
    }
    return ans1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }   
    cout<<"Second Largest element is present at:  "<<secondlargest(arr,n)<<endl;
}
