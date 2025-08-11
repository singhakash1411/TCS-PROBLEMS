#include<bits/stdc++.h>
using namespace std;


void setBit(int &n, int i){
    (n |= (1 << i));
    cout<<n;
}


int main(){
    int n=9;
    int i=2;
    setBit(n,i);
}