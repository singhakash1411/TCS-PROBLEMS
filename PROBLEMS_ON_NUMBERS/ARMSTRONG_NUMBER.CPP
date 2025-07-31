#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n){
   int original = n;
   int cnt = 0;

   int temp = n;
   while(temp > 0){
        temp /= 10;
        cnt++;
   }

   int sum = 0; 
   temp = n;
   while(temp > 0){
        int digit = temp % 10;
        sum += (int)round(pow(digit, cnt));  
        temp /= 10;
   }

   return (sum == original);
}

int main(){
    int n = 153;
    cout << (armstrong(n) ? "Yes" : "No") << endl;
    return 0;
}
