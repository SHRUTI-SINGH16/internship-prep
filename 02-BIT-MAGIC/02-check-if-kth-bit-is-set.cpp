#include<iostream>
using namespace std;

void kth_bit(int n, int k){
    if((n>>(k-1))&1!=0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    kth_bit(n,k);
    return 0;
}