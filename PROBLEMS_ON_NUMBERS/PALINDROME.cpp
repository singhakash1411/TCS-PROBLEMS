#include <bits/stdc++.h>
using namespace std;

bool IsPalindrome(int x) {
    int original = x;
    int rev = 0;
    while (x != 0) {
        int digit = x % 10;
        rev = rev * 10 + digit;
        x /= 10;
    }
    return original == rev;
}

int main() {
    int x = 121;
    bool check = IsPalindrome(x);
    if (check)
        cout << "Is Palindrome";
    else
        cout << "Not Palindrome";
}
