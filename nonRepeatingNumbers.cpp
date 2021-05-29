#include<bits/stdc++.h>
using namespace std;

// 1,4,5,4,2,8,9,1,5,2----non repeating 8,9


vector<int> nonRepeatingNumber(vector<int> nums){
    vector<int> vect ;
    int nums_size =(int)nums.size();
    // cout<<nums_size<<endl;

    int xor_number = nums[0];
    for (int i = 1; i < nums_size; i++)
    {   //debug
        // cout<<"hello    "<<xor_number<<"    ";
        xor_number=xor_number^nums[i];
        //debug
        // cout<<xor_number<<endl;
    }
    int last_set_bit =0;
    last_set_bit= xor_number&~(xor_number-1);
    //debug
    // cout<<last_set_bit<<endl<<"--------------"<<endl;

    vector<int> grp1, grp2;
    //debug
    // int count_grp1=0,count_grp2 =0;
    for(int i=0; i<nums_size;i++){
        int dum_num = last_set_bit&nums[i]; //if(last_set_bits&nums[i]==0) statement is not working because I gues
        if(dum_num==0){
            grp1.push_back(nums[i]);
            //debug
            // cout<<"grp1 "<<grp1[count_grp1]<<endl;
            // count_grp1++;
        }else{
            grp2.push_back(nums[i]);
            //debug
            // cout<<"grp2 "<<grp2[count_grp2]<<endl;
            // count_grp2++;
        }
    }
    int xor_grp1 =grp1[0];
    int grp1_size = (int)grp1.size();
    for(int i=1; i<grp1_size; i++){
        xor_grp1 =xor_grp1^grp1[i];
    }
    vect.push_back(xor_grp1);
    vect.push_back(xor_grp1^xor_number);
    
    return vect;

}

int main(){
    vector<int> vect {1,2,3,4,5,6,5,6,1,4,3,8};
    vector<int> ans_vect = nonRepeatingNumber(vect);
    cout<<ans_vect[0]<<"    "<<ans_vect[1];

    return 0;
}