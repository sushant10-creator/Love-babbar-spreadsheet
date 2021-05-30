#include <bits/stdc++.h>
using namespace std;
void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

/*
the time complexity of this algo is n*m

void merge(int arr1[], int arr2[], int n, int m){
    //compare arr1[i] with arr2[j] and compare arr2[j] with arr2[j+1]

    for(int i=0; i<n; i++){
        if(arr1[i]>arr2[0]){
            swap(&arr1[i], &arr2[0]);
            int k=0;
            while(arr2[k]>arr2[k+1]&&k<m-1){
                swap(&arr2[k],&arr2[k+1]);
                k++;
            }
        }
    }

}
*/
//gap algorithm
int ceilingDiv(int n){
    if(n==1){
        return 0;
    }
    return n%2==0?n/2:(n/2)+1 ;
        
}
void merge(int arr1[], int arr2[], int n, int m){
int totalNumber = m+n;
int gap = ceilingDiv(totalNumber);
for(;gap>=1;){
    for(int i =0; i+gap<n+m;i++){
        if(i+gap<n){
            if(arr1[i]>arr1[i+gap]){
                swap(&arr1[i],&arr1[i+gap]);
            }
        }
        if(i+gap>=n){
            if(i>=n){
                if(arr2[i-n]>arr2[i+gap-n]){
                    swap(&arr2[i-n],&arr2[i+gap-n]);
                }
            }
            if(i<n){
                if(arr1[i]>arr2[i+gap-n]){
                    swap(&arr1[i],&arr2[i+gap-n]);
                }
            }
        }
        
    }
    gap=ceilingDiv(gap);

}
}

int main(){
    int arr1[]={1,3,7,9,10};
    int arr2[]= {2,4,6,8};
    merge(arr1,arr2,5,4);
    cout<<"arr1"<<endl;
    for(int i=0; i<5;i++){
        cout<<arr1[i]<<endl;
    }
    cout<<"arr2"<<endl;
    for(int i=0; i<4;i++){
        cout<<arr2[i]<<endl;
    }

    return 0;
}