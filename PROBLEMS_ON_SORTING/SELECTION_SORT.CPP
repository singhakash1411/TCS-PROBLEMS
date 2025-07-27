#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        int minIndex = i;
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }
        swap(nums[i], nums[minIndex]);  
    }

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> nums = {34, 56, 12, 32, 1};
    cout << "The sorted array is: ";
    selectionSort(nums);
    return 0;
}
