#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string str){
    int strlen = str.size();

    bool dp[strlen][strlen];
    int start = 0;
    int legth_of_substring =0;
    memset(dp, 0, strlen);
    //for length of substring =1;
    for(int i=0; i<strlen; i++){
        dp[i][i] = 1;
    }
    //for length of substring =2
    for(int i =0 ; i<strlen-1; i++){
        if(str[i]==str[i+1]){
            dp[i][i+1] = 1;
            start = i;
            legth_of_substring = 2;
        }
    }
    //for length of substring >2
    for(int i=0; i<strlen-2; i++){
        
    }
}