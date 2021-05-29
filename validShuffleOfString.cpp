//12XYZA is not valid shuffle of A12Z and XY because A12Z is itself reshuffled among themselves
//AX12ZY is valid shuffle of A12Z and XY
#include<bits/stdc++.h>
using namespace std;

bool isValidShuffle(string main_string, string S1, string S2){
    if(main_string.size()!=S1.size()+S2.size()){
        return false;
    }
    int countS1 =0, countS2 =0;
    for (int i=0; i<main_string.size(); i++){
        if(main_string[i]==S1[countS1]){
            countS1++;
        }else{
            if (main_string[i]==S2[countS2])
        {
            countS2++;
        }else{
            return false;
        }

        }
    }
    return true;
}
int main(){
    string main_string = "12XYZ";
    string S1 ="Z21";
    string S2 ="XY";
    string ans = isValidShuffle(main_string, S1, S2)==true?"valid":"not valid";//question mark operator
    cout<<ans;
    return 0;
}