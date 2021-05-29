#include<bits/stdc++.h>
using namespace std;

int setBits(int N){
    int count =0;
    // while(N!=0){
    //     count += N&1; /*The & (bitwise AND) in C or C++ takes two numbers as operands 
    //                     and does AND on every bit of two numbers. 
    //                     The result of AND is 1 only if both bits are 1.*/
    //     N>>=1;  /*Bitwise operator: The >> (right shift) in C or C++ takes two 
    //                     numbers, right shifts the bits of the first operand, the second 
    //                     operand decides the number of places to shift.*/
    // }
    
    while(N!=0){
        count +=1;
        N=N&(N-1); //effective than above algo because its running time is equal to number of set bits present. while the running time of above
                    // algo is log(N)
    }
    
    return count;
}
int main(){
    int N =50;
    cout<<setBits(N);

    return 0;
}