#include<bits/stdc++.h>
using namespace std;

// int isReverse(string &S1, string &S2){
//     if(S1.size()!=S2.size()){
//         return 0;
//     }
//     for (int i = 0; i < S1.size(); i++)
//     {
//         if(S1[i]!=S2[S2.size()-1-i]){
//             return 0;
//         }
//     }
//     return 1;
    
// }
void isRotation(string &S1, string &S2){
    string temp = S1+S2;
    if(temp.find(S2)!=string::npos){
        cout<<"yes";
    }else{cout<<"no";
    }
}

int main(){
    // string S1 ="abcdefghijklmnopqrstuvwxyz";
    // string S2 ="zyxwvutsrqponmlkjihgfedcba";
    // if(isReverse(S1, S2)!=1){
    //     cout<<"Not rotation";
    // }else{
    //     cout<<"Rotation";
    // }
    string S1 ="abcdef";
    string S2 ="defabc";
    isRotation(S1, S2);
    return 0;
}