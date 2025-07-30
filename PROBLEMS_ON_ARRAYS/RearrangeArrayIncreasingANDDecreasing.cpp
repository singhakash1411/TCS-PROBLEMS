#include<bits/stdc++.h>
using namespace std;

void rearrangeArr(vector<int>& arr){
    vector<int>nums;
    sort(arr.begin(), arr.end());
    int mid= arr.size()/2 -1;

    for(int i =0; i<= mid;i++){
        nums.push_back(arr[i]);
    }
    for(int i=arr.size()-1; i >= mid+1; i--){
        nums.push_back(arr[i]);
    }
    for(int i= 0 ; i< nums.size(); i++){
        cout<<nums[i]<< " ";
    }

}
int main(){
    vector<int>arr = {6,2,4,9,8,7};
    rearrangeArr(arr);
    return 0;
}