# Tower of Powers

In this problem, we need to calculate the modular exponentiation using Euler's Totient function repeatedly. The key formula is:

\[ a^n \mod m = a^{(n \mod \phi(m))} \mod m \]

where \(\phi(m)\) is the Euler's Totient function. Given this, we need to recursively apply \(\phi\) until the result stabilizes. Here is a detailed explanation and the C++ solution for the problem.

## Problem Explanation

1. **Euler's Totient Function**:
   - The Euler's Totient function, \(\phi(n)\), counts the number of integers up to \(n\) that are relatively prime to \(n\).

2. **Modular Exponentiation**:
   - The expression \(a^n \mod m\) can be simplified using the property of \(\phi\), particularly useful when \(n\) is large.

3. **Recursive Reduction**:
   - We need to reduce \(n\) modulo \(\phi(m)\), then \(\phi(\phi(m))\), and so forth, until we reach a manageable size.

## C++ Solution

Here is the complete C++ solution implementing the described approach:

```cpp
#include <bits/stdc++.h>
using namespace std;

// Function to perform binary exponentiation
long long binpower(long long a, int n, long long MOD) {
    a %= MOD;
    long long ans = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            ans = (ans * a) % MOD;
        }
        a = (a * a) % MOD;
        n >>= 1;
    }
    return ans;
}

// Function to compute the Euler's Totient function
long long phi(long long n) {
    long long result = n;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main() {
    // Initial value for r and array to store the sequence of phi values
    long long r = 1000000007;
    long long are[29] = {0};
    int i = 28;
    while (r > 1) {
        are[i] = r;
        r = phi(r);
        i--;
    }
    are[i] = 1;
    
    int t;
    cin >> t;
    while (t--) {
        long long a;
        int n;
        cin >> a >> n;
        long long res = 1;
        long long temp = a;
        long long prev = 1;

        // Calculate result using the precomputed phi values
        for (int i = 29 - n; i < 29; i++) {
            res = binpower(temp, prev, are[i]);
            prev = res;
        }
        cout << res << endl;
    }
    return 0;
}

## Overall time complexity by this method:
O(tlogn)

