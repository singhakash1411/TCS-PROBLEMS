#include<bits/stdc++.h>
using namespace std ;

bool isPalindrome(int n){
    int digit =0;
    int rev =0;
    int originalNo = n;
    while(n > 0){
        digit = n % 10;
        rev = rev *10 + digit;
        n /=10;
    }
    if(rev == originalNo)return true;
    return false ;
}
int main(){
    int min =10;
    int max= 50;
    for(int i = min; i <= max ; i++){
        if(isPalindrome(i)){
            cout<< i <<" ";
        }
    }
}