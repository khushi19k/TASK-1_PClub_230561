#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;
 
long long power(long long a, long long b, long long m) {
    a %= m;
    long long ans = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            ans = (ans * a) % m;
        }
        a = (a * a) % m;
        b /= 2;
    }
    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,n;
        cin>>a>>n;
        if(n==1){
        cout<<a%MOD<<"\n";
        return 0;
        }
        long long ans=power(a,a,MOD-(n-2));
        for(long long i=n-3;i>=0;i--){
            ans=power(a,ans,MOD-i);
        }
        cout<<ans<<endl;
    }
    return 0;
}