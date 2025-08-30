#include<bits/stdc++.h>
using namespace std;

// Recursive function
int powerofN(int n, int k ){
    
    if(k ==0 )return 1;
    return n * powerofN(n , k-1);
    
}

//Iterative function using loop
int powerofN(int n, int k ){
    int ans= 1;
    if(k ==0 )return 1;
    for(int i= 1; i <= k ;i++){
        ans *=n;
    }
    return ans;
    
}
int main(){
int n= 5;
int k = 3;
int res = powerofN( n, k );
cout<<res;
return 0;
}