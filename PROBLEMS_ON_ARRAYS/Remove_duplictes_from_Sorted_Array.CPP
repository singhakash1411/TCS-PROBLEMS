#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int>& arr){
    unordered_set<int> mpp;
    vector<int> temp;

    for(int i=0; i< arr.size(); i++){
        if(mpp.find(arr[i]) == mpp.end() ){   
            temp.push_back(arr[i]);
            mpp.insert(arr[i]);
        }
    }
    return temp;
}

int main(){
    vector<int> arr = {1,2,2,3,4,4,5};
    vector<int> result = removeDuplicates(arr);
    for(int x : result){
        cout << x << " ";
    }
    return 0;
}
