#include <bits/stdc++.h>
using namespace std;


bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}


vector<int> getPrime(int min, int max) {
    vector<int> primes;
    for (int i = min; i <= max; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int min = 10, max = 30;
    vector<int> primes = getPrime(min, max);

    cout << "Prime numbers between " << min << " and " << max << " are: ";
    for (int p : primes) {
        cout << p << " ";
    }

    return 0;
}
