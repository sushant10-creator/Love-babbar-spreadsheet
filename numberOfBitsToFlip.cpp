#include<bits/stdc++.h>
using namespace std;

int numberOfBitsFlip(int a, int b){
    int count=0;
        int num1 =0, num2 =0;
        while(a!=0||b!=0){
            num1 = a&1;
            num2 = b&1;
            if(num1!=num2){
                count++;
            }
            a>>=1;
            b>>=1;
        }
        // Your logic here
        return count;
}
int main(){
    int a =10, b=20;
    cout<<numberOfBitsFlip(a, b);

    return 0;
}