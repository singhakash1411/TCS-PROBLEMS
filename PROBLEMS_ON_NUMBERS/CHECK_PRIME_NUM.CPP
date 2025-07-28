#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x <=1)return false;
    for(int i=2; i<sqrt(x); i++){
        if(x % i == 0)return false;
    }
    return true;
}
int main(){
    int x=12;
    isPrime(x);
    if(isPrime(x) ==0)cout<<"Yes ,its a prime";
    else{
        cout<<"Not a prime ";
    }
}