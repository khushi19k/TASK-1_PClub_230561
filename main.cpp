#include <bits/stdc++.h>
using namespace std;

long long binpower(long long a, int n, long long MOD){
    a %= MOD;
    long long ans = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            ans = (ans * a) % MOD;
        }
        a = (a * a) % MOD;
        n>>=1;
    }
    return ans;
}


long long phi(long long n){
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
    long long r = 1000000016531;
    long long are[34] = {0};
    int i = 33;
    while(r>1)
    {
        are[i] = r;
        r = phi(r);
        i--;
    }
    are[i] = 1;
    int t;
    cin >> t;
    while(t--)
    {
        long long a;
        int n;
        cin >> a >> n;
        long long res = 1;
        long long temp = a;
        long long prev = 1;
        
        for(int i = 34-n;i<34;i++)
        {
            res = binpower(temp,prev,are[i]);
            prev = res;
        }
        cout << res;
    }
    return 0;
}
