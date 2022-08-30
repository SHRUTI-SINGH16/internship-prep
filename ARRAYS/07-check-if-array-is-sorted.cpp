#include<iostream>
using namespace std;

// nested for loops     O(N^2)
//check if every element is less than or equal to all the elements on its right
// bool sorted(int arr[], int n){
//     bool res = true;
//     for(int i=0;i<n;++i){
//         for(int j=i+1;j<n;++j){
//             if(arr[i]>arr[j]){
//                 res = false;
//                 break;
//             }
//         }
//     }
//     return res;
// }

// 1 for loop  - O(n)
//every incoming element must be greater than the previous one
bool sorted(int arr[], int n){
    int largest = arr[0];
    for(int i=1;i<n;++i){
        if(arr[i]<largest){
            return false;
        }else{
            largest=arr[i];
        }
    }
    return true;
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    } 
    bool ans = sorted(arr,n);  
    if(ans==true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
