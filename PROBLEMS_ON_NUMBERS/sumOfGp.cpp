#include<bits/stdc++.h>
using namespace std;

float sumOfSeries(float a, float r, int n){
    int sum=0;
    // for(int i=0; i< n; i++){
    //     sum+=a;
    //     a *=r;
    // }
    // return sum;
        if(r==1)return a*n;
        else{
            sum = a * (pow(r,n)-1) /(r-1);
            return sum;
        }
        
    }


int main(){
     int a=2;
     int r=1;
     int n=3;
     int result = sumOfSeries(a,r,n);
     cout<<result;
     return 0;
}