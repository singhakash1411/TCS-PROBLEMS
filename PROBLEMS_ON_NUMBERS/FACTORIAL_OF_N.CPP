#include<bits/stdc++.h>
using namespace std;

//recursive method 
int  factorial(int n){
    if(n == 0 )return 1;
    else{
        return n * factorial(n-1);
    }
}

//Using loop
long long factorial(int n){
    long long factorial=1;
    if(n < 0){
        cout<<"There is not factorial for the negative numbers ";
    }
    for(int i = 1 ; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}
int main(){
int n= 4;
int res = factorial(n);
cout<<res;
return 0;
}