#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void rotate(int arr[], int sizearr){
    int temp = arr[sizearr-1];
    for(int i=1 ; i<=sizearr-1;i++){
        swap( &arr[i], &arr[0]); /*I took arr[1]
        as pivot and sawpped elements of arr[i] with arr[0]
        consider arr ={0,1,2,3,4,5} then 
                         ^
                         |
                        pivot 
        first iteration: swap 0 with 1 --> {1,0,2,3,4,5}
        second iteration: swap 2 with 1 --> {2,0,1,3,4,5} 
        third iteration: swap 3 with 1--> {3,0,1,2,4,5}
        therefore after n-1 iteration --> {5,0,1,2,3,4}*/
    }
}
int main(){
    int arr[]={0,1,2,3,4,5};
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    rotate(arr, arrsize);
    for(int i =0; i<arrsize; i++){
        std:: cout<<" "<< arr[i];
    }
    return 0;
}