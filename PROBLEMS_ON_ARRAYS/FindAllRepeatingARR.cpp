#include<bits/stdc++.h>
using namespace std;

void repeatedNum(vector<int> &nums){
    vector<int>temp;
    unordered_map<int,int>freq;
    for(int i=0; i < nums.size(); i++){
        freq[nums[i]]++;
    }
    for(auto &n : freq){
        if(n.second > 1){
            temp.push_back(n.first);
        }
    }
    sort(temp.begin(), temp.end());
    for(int i =0; i< temp.size();i++){
        cout<<temp[i]<<" ";
    }
}

int main(){
    vector<int>nums= {1,2,2,3,4,4,5,5,6};
    int n= nums.size();
    repeatedNum(nums);
    return 0;
}