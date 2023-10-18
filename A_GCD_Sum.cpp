#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

ll gcd_sum(ll num) {
ll tmp = num, digitsum = 0;

    while (tmp > 0) {
        digitsum += tmp % 10;
        tmp /= 10;
    }

    ll gcd = __gcd(num, digitsum);
    return gcd;
}

int main(void) {
int t;
cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        if (gcd_sum(n) != 1) {
            cout << n << endl;
        } else if (gcd_sum(n + 1) != 1) {
            cout << n + 1 << endl;
        } else if (gcd_sum(n + 2) != 1) {
            cout << n + 2 << endl;
        }
    }
    return 0;
}