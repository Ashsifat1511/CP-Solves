#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define endl '\n'

int main() {
    ll t; cin >> t;
    ll f = 0;
    while(t--) {
        f++;
        set<ll>ss;
        ll n; cin >> n;
        ll a[n + 2];

        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = n - 1; i >= 0; i--) {
        if(ss.count(a[i]) == 0 && ss.count((-a[i])) == 0)
            ss.insert(a[i]);
        }

        vector<ll>v(ss.begin(), ss.end());
        ll sum = 0;
        for(ll i = 0; i < v.size(); i++) {
            sum += v[i];
        }

        cout << "Case " << f << ": " << sum << '\n';
    }

    return 0;
}