//hare and tortoise
#include <bits/stdc++.h>
using namespace std;

int duplicate(int arr[]){
    int fast =arr[0];
    int slow = arr[0];
    do{
        slow =arr[slow];
        fast = arr[arr[fast]];
    }while(slow !=fast); //intially both slow and fast are equal so using while loop would not be a good option.
    fast = arr[0];

    while(slow !=fast){
        slow =arr[slow];
        fast = arr[fast];
    }

    return slow;
}
int main(){
    int arr[]= {1,2,3,4,5,6,7,7};
    cout<<duplicate(arr);
    return 0;
}