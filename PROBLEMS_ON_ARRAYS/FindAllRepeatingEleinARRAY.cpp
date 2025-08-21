#include<bits/stdc++.h>
using namespace std;

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

int main(){
    vector<int>arr= {1,2,2,3,3,4,5,5,6,7,7};
    findRepeatingEle(arr);

}