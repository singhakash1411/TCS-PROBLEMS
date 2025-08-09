#include<bits/stdc++.h>
using namespace std;

int sumOfSeries(int a, int d, int n){
    int sum=0;
    for(int i=0; i< n; i++){
        sum+=a;
        a+=d;
    }
    return sum;
}

int main(){
     int a=2;
     int d=1;
     int n=3;
     int result = sumOfSeries(a,d,n);
     cout<<result;
     return 0;
}