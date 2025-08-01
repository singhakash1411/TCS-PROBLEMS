#include<bits/stdc++.h>
using namespace std;

//using extra space as a vector array
bool checkPerfectOrNot(int n){
    vector<int>factors;
    for(int i =1; i<= sqrt(n); i++){
        if(n % i ==0){
            factors.push_back(i);
            if(i !=1 && i !=n/i)
            factors.push_back(n/i);
        }

    }
    int sum = 0;
    for(int i =0; i<factors.size(); i++){
        sum += factors[i];
    }
    if(sum == n)return true;
    else {
        return false;
    }
}

//optimal approach in O(N) and no space , isko use karo
bool checkPerfectOrNot(int n){
    if(n <=1)return false;

    int sum =1;
    for(int i =2; i <= sqrt(n); i++){
        if(n % i ==0){
            sum +=i;
            if(i !=1 && i != n/i){
               sum +=n/i; 
            }
        }
    }
    return sum ==n;
}
int main(){
    int n= 28;
    cout<<checkPerfectOrNot(n);
    return 0;
}