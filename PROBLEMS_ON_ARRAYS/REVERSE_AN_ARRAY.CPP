#include<bits/stdc++.h>
using namespace std;

void  reverseArr(vector<int>& arr){
    vector<int>nums;
    for(int i= arr.size()-1; i>=0; i--){
        nums.push_back(arr[i]);
    }
    for(int i =0; i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
//Here is the better approach to solve where no extra space needed like the use of another array
 void reverseArr(vector<int>& arr){
    int left=0,  right= arr.size()-1;
    while(left < right){
        swap(arr[left], arr[right]);
            left++;
            right--;
        }
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<" ";
        }
    }
    

int main(){
    vector<int>arr = {1,2,3,4,5};
    cout<<"THe reversed array is:";
    reverseArr(arr);
    return 0;
}