//time complexity: O(n), space : O(1)
#include <iostream>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b= temp;
}
void rearrange(int arr[], int arrSize){
    int j=0;
    for (int  i = 0; i < arrSize; i++)
    {
        if (arr[i]<0)
        {
            swap(&arr[i], &arr[j]);
            j++;
        }
        
    }
    
}
int main(){
  int arr[] = {-9,8,-9,10,11,-14,16,-18};
    int sizeArr = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr, sizeArr);
    for(int i =0; i<sizeArr; i++){
        std:: cout<< arr[i]<<" ";
    }
    return 0;
}