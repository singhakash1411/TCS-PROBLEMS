#include<bits/stdc++.h>
using namespace std;

void removeDuplicatesFromUnsortedArr(vector<int>&arr){
    int n= arr.size();
    vector<int>temp;
    unordered_set<int> seen;
    for(int i = 0; i< arr.size(); i++){
        if(seen.find(arr[i]) == seen.end()){
             temp.push_back(arr[i]);
        seen.insert(arr[i]);
        }
       

    }
    for(int i=0 ; i< temp.size(); i++){
        cout<<temp[i]<<" ";
    }
    
   
}

int main(){
    vector<int>arr= {1,2,6,5,5,2,3};
    removeDuplicatesFromUnsortedArr(arr);
    return 0;
}