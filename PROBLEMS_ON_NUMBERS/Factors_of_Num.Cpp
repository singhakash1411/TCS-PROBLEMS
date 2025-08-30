#include<bits/stdc++.h>
using namespace std;

void factorsofN(int n){
    for(int i = 1 ; i <= n ; i++){
        if(n % i ==0 ){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n = 6;
    factorsofN(n);
    return 0;
}