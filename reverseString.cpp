#include<bits/stdc++.h>
using  namespace std;

vector<char> reverseStrig(vector<char> &vect){
    int vect_size = vect.size();
    for(int i=0; i<vect_size/2; i++){
        char temp = vect[i];
        vect[i] = vect[vect_size-i-1];
        vect[vect_size-i-1] = temp;
    }
    return vect;
}
int main(){
    vector<char> vect = {'a','b','c','d','e'};
    reverseStrig(vect);
    for(int i =0; i<vect.size(); i++){
        cout<<vect[i]<<" ";
    }
    return 0;
}