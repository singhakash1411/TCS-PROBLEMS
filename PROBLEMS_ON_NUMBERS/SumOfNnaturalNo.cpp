#include<bits/stdc++.h>
using namespace std;

int sumOfN(int n){
    int sum=0;
    if(n==0)return 0;
    for(int i= 1; i <= n; i++){
        sum = n*(n + 1)/2;
    }
    return sum;
}
int main(){
    int n = 5;
    int result = sumOfN(n);
    cout<<result;
    return 0;

}