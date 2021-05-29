#include <bits/stdc++.h>
using namespace std;
int maxJump(int arr[], int sizearr){
     int jump=0;
    for(int i=0; i!=sizearr-1;){
        if (arr[i]<sizearr-i-1)
        {
            i=i+arr[i];
            jump = jump+1;
        }else{
            i=sizearr-1;
            jump = jump +1;

        }

    }
    return jump;
    
}
int main(){
    int arr[]={1, 4, 3, 2, 6, 7 };
    int sizearr = sizeof(arr)/sizeof(arr[0]);
    cout<<maxJump(arr, sizearr);
    return 0;
}