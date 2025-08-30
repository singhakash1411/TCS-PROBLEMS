#include<bits/stdc++.h>
using namespace std ;

// void nonRepeatingEle(vector<int>&nums){
//     unordered_map<int,int>freq;
//     vector<int>temp;
//     for(int i=0; i< nums.size(); i++){
//         freq[nums[i]]++;
//     }
//     for(auto &n : freq){
//         if(n.second !=2){
//             temp.push_back(n.first);
//         }
//     }
//     sort(temp.begin(), temp.end());
//     for(int i=0 ; i< temp.size(); i++){
//         cout<<temp[i]<<" ";
//     }
// }
void nonRepeatEle(vector<int>&nums){
    sort(nums.begin(), nums.end());
    vector<int>temp;

    for(int i =0 ; i < nums.size()-1; i++){
        if(nums[i] != nums[i+1]){
            temp.push_back(nums[i]);
        }
    }
    for(int i=0; i< temp.size(); i++){
        cout<<temp[i]<<" ";
    }
}
int main(){
    vector<int>nums= {1,2,2,3,4,4,5,6,6,7};
    //nonRepeatingEle(nums);
    nonRepeatEle(nums);
    return 0;
}