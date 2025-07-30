#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> count(vector<int>arr){
    unordered_map<int, int>mpp;
    for(int i=0; i < arr.size(); i++){
        mpp[arr[i]]++;
    }
    for( auto a :mpp){
        cout<<"The count of " << a.first <<" is "<<a.second <<endl;
    }
    return mpp;
}
int main(){
    vector<int>arr= {1,1,2,3,2,4,5,3,5};
    unordered_map<int,int> ans = count(arr);
    return 0;
}