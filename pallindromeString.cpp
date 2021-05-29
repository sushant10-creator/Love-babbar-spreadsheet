#include<bits/stdc++.h>
using namespace std;

int isPallindrome(string &S)
	{
	    
	    for(int i=0; i<S.size(); i++){
	        if(S[i]!=S[S.size()-i-1]){
	            return 0;
	        }
	    }
	    return 1;
	}
int main(){
    string S = "abcba";
    if(isPallindrome(S)!=0){
        cout<<"Pallindrome";
    }else{
        cout<<"not pallindrome";
    }
}
