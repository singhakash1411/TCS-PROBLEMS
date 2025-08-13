#include <bits/stdc++.h>
using namespace std;

void MinMax(int n) {
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int originalNum = n;

    while (n != 0) {
        int d = n % 10;
        mini = min(mini, d);
        maxi = max(maxi, d);
        n /= 10;
    }
    cout << "The minimum digit in " << originalNum << " is " << mini << endl;
    cout << "The maximum digit in " << originalNum << " is " << maxi << endl;
}

int main() {
    int num = 1789;
    MinMax(num);
    return 0;
}
