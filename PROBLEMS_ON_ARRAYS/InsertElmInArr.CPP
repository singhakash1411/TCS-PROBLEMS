#include <bits/stdc++.h>
using namespace std;
//***************Insert At the Beggining  */
void insertEle(int arr[], int &n, int capacity, int val) {
    if (n >= capacity) {
        cout << "Array is full, cannot insert" << endl;
        return;
    }
    
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = val; 
    n++;          
}// inserting  in the middle of the array 
void insertAtMiddle(int arr[], int &n, int capacity, int val, int position){
    for(int i=n ; i>position; i--){
        arr[i]=arr[i-1];
    }
    arr[position]=val;
    n++;
}

//*************Insert at the end of the array */
void insertAtEnd(int arr[], int &n, int capacity, int val){
    arr[n]=val;
    n++;
}



int main() {
    int capacity = 10;          
    int arr[capacity] = {1,2,3,4,5,6,7};
    int n = 7;                 

    insertEle(arr, n, capacity, 90);
    insertAtMiddle(arr, n, capacity, 100, 3);
    insertAtEnd(arr,n, capacity, 39);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
