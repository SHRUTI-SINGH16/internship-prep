#include<iostream>
#include<bits/stdc++.h>
using namespace std;


////TC=O(N) SC=O(N)
// bool matching(char ch1, char ch2){
//     if((ch1=='(' && ch2==')') || (ch1=='[' && ch2==']') || (ch1=='{' && ch2=='}')){
//         return true;
//     }
//     return false;
// }

// bool isBalanced(string str){
//     stack<char> st;
//     for(int i=0;i<str.size();++i){
//         if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
//             st.push(str[i]);
//         }else{
//             if(st.empty()==true){
//                 return false;
//             }else if(matching(st.top(),str[i])==false){
//                 return false;
//             }else{
//                 st.pop();
//             }
//         }
//     }
//     if(st.empty()==true){
//         return true;
//     }
//     return false;
// }


//TC=O(N) SC=O(1)
bool isBalanced(string str){
    int i = -1;
    for(auto ch : str){
        if(ch=='(' || ch=='[' || ch=='{'){
            ++i;
        }else{
            if(i>=0 && ((str[i]=='(' && ch==')') || (str[i]=='[' && ch==']') || (str[i]=='{' && ch=='}'))){
                --i;
            }else{
                return false;
            }
        }
    }
    if(i==-1){
        return true; 
    }
    return false;
}

int main(){
    string str = "{([])}";
    bool ans = isBalanced(str);
    cout<<ans<<endl;
    return 0;
}