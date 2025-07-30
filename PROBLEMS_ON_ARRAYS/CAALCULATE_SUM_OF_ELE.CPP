#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>&arr){
    int Sum= 0;
    for(int i=0; i< arr.size(); i++){
        Sum += arr[i];
    }
    return Sum;
}

int main(){
    vector<int> arr= {1,2,3,4,5};
    int ans = sum(arr);
    cout<<ans;
    return 0;
}