#include<bits/stdc++.h>
using namespace std;

//two  pointer approach 
void moveZeros(vector<int>&nums){
    int nonzeros=0;
    for(int i= 0; i< nums.size(); i++){
        if(nums[i] != 0 ){
            nums[nonzeros] =nums[i];
            nonzeros++;
        }
    }
    for(int i= nonzeros; i <nums.size(); i++){
        nums[i]=0;
    }
}
// isme pahle zero fins karo where it starts and then start swapping
void moveZeros(vector<int>& nums) {
    int j = -1;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            j = i;
            break;
        }
    }
    if (j == -1) return;

    for (int i = j + 1; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}


int main(){
    vector<int> nums= {1,0,2,0,4,0,0,3};
    moveZeros(nums);
    for(int i= 0 ; i< nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}