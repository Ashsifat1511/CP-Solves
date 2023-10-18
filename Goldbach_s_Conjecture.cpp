#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define mx 10000003
bitset <mx> mark;
vector <ll> primes;

void sieve() {
    mark[0] = mark[1] = 1;
    primes.push_back(2);
    int lim = sqrt(mx * 1.0) + 2;
    for (int i = 4; i < mx; i += 2) mark[i] = 1;
    for (int i = 3; i < mx; i += 2) {
        if (!mark[i]) {
            primes.push_back(i);
            if (i <= lim)
                for (int j = i * i; j < mx; j += i)
                    mark[j] = 1;
        }
    }
}

int main() {
    sieve();
    ll t; scanf("%lld", &t);
    ll f = 0;

    while(t--) {
        f++;
        printf("Case %lld: ", f);
        ll n; scanf("%lld", &n);
        ll ans = 0;

        for(ll i = 0; primes[i] <= (n / 2); i++) {
            ll p = n - primes[i];
            ll q = primes[i];
            if(!mark[p] && !mark[q]) {
                ans++;
            }
        }

        printf("%lld\n", ans);
    }
}