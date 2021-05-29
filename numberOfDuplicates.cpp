#include<bits/stdc++.h>
using namespace std;

void duplicates(string &S){
  map<char, int> mp;
  for(int i=0; i<S.size(); i++){
      mp[S[i]]++;
  }
    for(auto it = mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<it->second<<" ";
    }  
}
int main(){
   string S = "helaaloppp";
   duplicates(S);

   return 0;
}