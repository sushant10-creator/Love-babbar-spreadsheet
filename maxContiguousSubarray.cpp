//kadane's algorith
#include <bits/stdc++.h>
using namespace std;

int maxArray(int arr[], int sizearr){
/*    int tempMax = 0;
    int max =INT_MIN;
    for(int i=0; i<sizearr; i++){
         tempMax = 0;
        for(int j=i; j<sizearr;j++){
            tempMax =tempMax + arr[j];
            if(tempMax> max ){
                max = tempMax;
            }
        }
    }
return max;*/
int tempMax =0;
int maxi =INT_MIN;
for(int i=0; i<sizearr; i++){
    tempMax+=arr[i];
    maxi = max(tempMax, maxi);
    if (tempMax<0)
    {
        tempMax =0;
    }

}
 
return maxi;


}
int main(){
    int arr[] ={-2,-3,-4,-1,-2,9,-5,-3};
    cout<<maxArray(arr, 8);
    return 0;
}