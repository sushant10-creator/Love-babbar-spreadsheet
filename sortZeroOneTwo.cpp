//dutch national flag problem
#include <iostream>

void swap(int *a, int *b){
    int temp= *a;
    *a = *b;
    *b =temp;
}
void sort012(int A[], int arrSize){
    int high =arrSize-1;
    int low=0, mid=0;
    while (mid<=high)
    {    
    switch (A[mid])
    {
    case 0: swap(&A[mid], &A[low]); mid ++; low++; break;

    case 1: mid++; break;
    
    case 2: swap(&A[mid], &A[high]); high--; break;
    
    }
    }
}
int main(){
    int arr[]= {0,2,2,1,1,1,1,2,1,2,0,0,1,2,0,0,1};
    int sizeArr= sizeof(arr)/sizeof(arr[0]);
    sort012(arr, sizeArr);
    for(int i =0; i<sizeArr; i++){
        std:: cout<< arr[i];
    }
    return 0;
}
