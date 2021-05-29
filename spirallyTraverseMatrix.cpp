#include <bits/stdc++.h>
using namespace std;
vector<int> spiralMatrix(vector<vector<int>> &arr,int k,int l,int m,int n){
    vector<int> vect;
    while (m<n&&k<l)    //m!=n && k!=l doesn't work
    {
        for(int i=m; i<=n; i++){
            // cout<<arr[k][i]<<" ";
            vect.push_back(arr[k][i]);
        }++k;
        for(int i=k; i<=l;i++){
            // cout<<arr[i][n]<<" ";
            vect.push_back(arr[i][n]);
        }--n;
        for(int i=n; i>=m;i--){
            // cout<<arr[l][i]<<" ";
            vect.push_back(arr[l][i]);
        }--l;
        for(int i=l; i>=k;i--){
            // cout<<arr[i][m]<<" ";
            vect.push_back(arr[i][m]);
        }++m;
    }
    return vect;
    
}
int main(){
    vector<vector<int>> vect = {{1,2,3,4,},{5,6,7,8},{9,10,11,12,},{13,14,15,16},{17,18,19,20} };
    vector<int> ansVect;
    ansVect = spiralMatrix(vect, 0, 4, 0, 3);
    for (int i = 0; i < ansVect.size(); i++)
    {
        cout<<ansVect[i]<<" ";
    }
    

/* col, rows-1, col-1, rows-2, col-2, rows-3, col-3
          ------>
    ^    1   2   3   4   |
   / \   5   6   7   8   |
    |    9   10  11  12  |
    |    13  14  15  16 \ /
    |    17  18  19  20  V  
            <---------            
                        
    1 2 3 4 8 12 16 20 19 18 17 13 9 5 6 7 11 15 14 10                   
                    
    */

    return 0;
}
