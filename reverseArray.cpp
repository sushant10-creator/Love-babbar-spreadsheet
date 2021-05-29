#include <iostream>
int main(){
    int arr[6] ={0,1,2,3,4,5};
    int temp = 0, n=sizeof(arr)/sizeof(int);
    for(int i =0; i<n/2; i++){//i<n makes the array non inverted.
        temp= arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]= temp;
    }
    for (int i = 0; i < n; i++)
    {
        std::cout<< arr[i]<<std::endl;
    }
    
    return 0;
}