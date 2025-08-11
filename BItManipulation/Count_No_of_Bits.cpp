#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int cnt = 0;
    while (n > 0) {
        if (n % 2 == 1) 
            cnt++;
        n /= 2; 
    }
    return cnt;
}

int main() {
    int n = 13; 
    int result = countSetBits(n);
    cout << result; 
    return 0;
}
