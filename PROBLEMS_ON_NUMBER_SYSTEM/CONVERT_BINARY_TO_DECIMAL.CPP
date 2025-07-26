#include<bits/stdc++.h>
using namespace std;

void binaryConverter(int x){
    vector<int>binary;
    while(x > 0){
        binary.push_back(x % 2);
        x /=2;
    }
    //yaha par jo v decimal aayega wo reverse oreder me store ho rha h vector me, issilia usko reversse karke likenge 
    for(int i = binary.size() - 1 ; i >= 0; i--){
        cout << binary[i];
    }
}

int main(){
    int x = 8;
    cout << "binary number of " << x << " is : ";
    binaryConverter(x);
    return 0;
}
