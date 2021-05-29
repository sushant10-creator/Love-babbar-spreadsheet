#include<bits/stdc++.h>
using namespace std;

string countAndSay(int n){
    if(n==1) return "1";
    if(n==2) return "11"; 
                    //n=5
                     //1, 11, 21, 1211, 111221, 312211
    string str ="11A";/*for example if I have to move through the for loop when i=4 (previous str value = 1211A), i'll check whether A is equal to 1 or not at last step
                        if it is not then i'll just append the count and its value to the ans sring.....see the for loop carefully*/

    for(int i=2; i<n;i++){
        int count =1;
        string ans="";
        for(int j= 1; j<str.size();j++){
            if(str[j]==str[j-1]){
                count++;
            }else{
                ans +=to_string(count);
                ans += str[j-1];
                count=1;
            }
        }
        str= ans+'A';/*when it goes for the next loop str will have string of last loop. for example if it goes for loop when i=3, in loop when i=2,
                        the value of string will be 21A */ 
    }
    return str.erase(str.size()-1/*size_t pos*/);       //erases all characters after pos position, https://www.geeksforgeeks.org/stdstringerase-in-cpp/ 

}
int main(){
    cout<<countAndSay(6);

    return 0;
}