#include <bits/stdc++.h>
using namespace std;
/*
let say the vector is {{1,2},{3,4}} and target is 3
then we seacrh for the first row and first column element
if target is smaller than this element then the element is not found
if it is equal then the element is found
if target is smaller than this element then check for the next row's first element.

is the vector has only one row, then it is dealt separately
*/
bool searchMatrix(vector<vector<int>> &vect, int target){
bool ansBool = false;
int rows = vect.size();
// cout<<"rows: "<<rows<<endl;
int columns = vect[0].size();
// cout<<"columns: "<<columns<<endl;
int targetRow=rows-1;
int temp =1;
for(int i=0; i<rows;i++){
    if(target<vect[i][0]){
        if (i==0)
        {
            temp=0;
          break;  
        }else{      
        targetRow = i-1;
        break;
        }
    }else{
        if (target==vect[i][0]){
        ansBool = true;
        temp =0;
        break;
    }
    }

}
if(temp !=0){
for(int i=0; i<columns; i++){
    if(vect[targetRow][i]==target){
        ansBool =true;
        break;
    }
    
}
}
return ansBool;

}
int main(){
    vector<vector<int>> vect = {{1,1}};
    bool ansBool = searchMatrix(vect, 2);
    cout<<boolalpha<<ansBool;

    return 0;
}

