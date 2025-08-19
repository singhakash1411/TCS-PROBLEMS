#include<bits/stdc++.h>
using namespace std;

void sortted(vector<int> &arr){
    int n=arr.size();
    for(int i=0; i<n; i++){
        for(int j=1; j < n; j++){
            if(arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j]= arr[j-1];
                arr[j-1]= temp;
            }
        }
    }
}
int Med(vector<int>& arr){
    int n= arr.size();
    sortted(arr);
    if(n%2 ==0){
        return ((arr[n/2] +arr[n/2 -1]))/2;
    }
    else {
        return  arr[n/2];
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int result = Med(arr);
    cout<<result;

}
