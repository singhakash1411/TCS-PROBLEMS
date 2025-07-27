#include<iostream>
#include<vector>
using namespace std;

int greatestNum(vector<int>&arr){
    int max = arr[0];
    for(int i= 0; i<arr.size(); i++){
        if( arr[i] > max){
            max= arr[i];
        }
    }
    return max;
}
int main(){
    vector<int>arr = {23,10,79, 90,30,3,1};
    int Max = greatestNum(arr);
    cout<<Max;
    return 0;
}