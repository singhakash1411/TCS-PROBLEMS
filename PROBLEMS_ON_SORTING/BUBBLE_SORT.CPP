#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr){
    for(int i =0; i< arr.size(); i++){
        for(int j=0; j< arr.size(); j++){
            if(arr[j] > arr[j+1]){
                int temp =arr[j];
                arr[j]= arr[j +1];
                arr[j + 1]= temp;
               
            }
        }
    }
}
int main(){
    vector<int> arr= {9,5,4,10,6,8};
    bubbleSort(arr);
    cout<<"The sorted array is here :";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i]<< " ";
    }
    return 0;

}