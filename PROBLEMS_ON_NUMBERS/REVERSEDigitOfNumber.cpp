#include<bits/stdc++.h>
using namespace std;
int reverseOfDigit(int num){
    int rev =0;
    while(num !=0){
        int digit = num %10;
        rev = rev* 10 + digit;
        num /=10;
    }
    return rev;
}
int main(){
    int num=127;
    int result= reverseOfDigit(num);
    cout<<result;
}