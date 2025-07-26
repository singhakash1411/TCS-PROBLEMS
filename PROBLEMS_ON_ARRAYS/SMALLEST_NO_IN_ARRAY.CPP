#include<bits/stdc++.h>
#include<vector>
using namespace std;

int  smallestNo(vector<int>&arr){
    int small = arr[0]; //initialize first num as smallest , easy kardeta h compare karna 
    for(int i=0; i< arr.size(); i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }
    return small;
    
}
int main(){
    vector<int> arr = {12,13,10,7,4};
    int smallest = smallestNo(arr);
    cout << smallest;
}