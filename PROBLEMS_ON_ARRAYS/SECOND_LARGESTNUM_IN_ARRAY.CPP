#include <bits/stdc++.h>
using namespace std;

int secondLargestNum(vector<int> &arr) {
    int largest = INT_MIN;
    int sec_largest = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > largest) {
            sec_largest = largest;
            largest = arr[i];
        } else if (arr[i] > sec_largest && arr[i] != largest) {
            sec_largest = arr[i];
        }
    }

    return (sec_largest == INT_MIN) ? -1 : sec_largest;  
    //return(sec_larest == INT_MIN ) ? -1 ,iska mtlb hia ki agar second largest nhi h to -1 return karo
    // : sec_largest ka mtlb , nhi to second largest return karo 
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int secmax = secondLargestNum(arr);
    cout << secmax;
}
