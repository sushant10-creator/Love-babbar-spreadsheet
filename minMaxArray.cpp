//Maximum and minimum of an array using minimum number of comparisons
//Tournament method
//O(n)
#include<iostream>
struct str{
    int min;
    int max;
};
struct str getMinMax(int arr[], int low, int high);
int main(){
    int numberOfInput=0;
    std::cout<<"Enter number of inputs you want"<<std::endl;
    std::cin>>numberOfInput;
    if(numberOfInput<=0){
        std::cout<<"Not a valid number"<<std::endl;
        return 0;
    }
    int arr[numberOfInput];
    for(int i =0; i<numberOfInput;i++){
        std::cout<<"enter your "<<i+1<<"th number"<<std::endl;
        std::cin>>arr[i];
    }
    struct str finalStr = getMinMax(arr, 0, numberOfInput-1);
    std::cout<<finalStr.max<<std::endl<<finalStr.min<<std::endl;
    
    
    return 0;
    
}
struct str getMinMax(int arr[], int low, int high)
{   
    struct str minmax, mml, mmr;
    int mid = (high+low)/2;
    
    if(high == low){
        minmax.min = arr[low];
        minmax.max = arr[high];
    }else{
        if(high == low+1){
            if (arr[high]>arr[low])
            {
                minmax.min = arr[low];
                minmax.max = arr[high];
            }else{
                minmax.min = arr[high];
                minmax.max = arr[low]; 
            }
            
        }else{
            mml = getMinMax(arr, low, mid);
            mmr = getMinMax(arr, mid+1, high);

                if (mml.min < mmr.min){
                    minmax.min = mml.min;}
                else{
                    minmax.min = mmr.min;    
                }
                // Compare maximums of two parts
                if (mml.max > mmr.max){
                    minmax.max = mml.max;}
                else{
                    minmax.max = mmr.max;}  
        }
    }
    return minmax;
};
