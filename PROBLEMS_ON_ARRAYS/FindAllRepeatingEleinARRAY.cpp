#include<bits/stdc++.h>
using namespace std;

//using hash map for O(n) TC
void findRepeatingEle(vector<int> & arr){
    vector<int>temp;
    unordered_map<int,int>seen;
    for(int i=0 ; i < arr.size();i++){
        seen[arr[i]]++;
        if(seen[arr[i]]==2){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0; i< temp.size(); i++){
        cout<<temp[i]<<" ";
    }
    
}

//using sorting method 
void duplicateEle(vector<int>&arr){
    sort(arr.begin(), arr.end());
    for(int i=0 ; i< arr.size(); i++){
        if(arr[i]== arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    vector<int>arr= {1,2,2,3,3,4,5,5,6,7,7};
    //findRepeatingEle(arr);
    duplicateEle(arr);
    return 0;

}