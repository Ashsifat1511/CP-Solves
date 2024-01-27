#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];sum+=a[i];
        }

        int g = 0;
        for (int i = 0; i < n - 1; ++i) {
            g = gcd(g, a[i + 1] - a[i]);
        }
        g = max(g, 1);

        sort(a.begin(), a.end());

        ll j = n - 1;
        ll res = a[n-1];

        while (true) {
            while (j >= 0 && a[j] > res) {
                --j;
            }

            if (j < 0 || a[j] != res) {
                break;
            }

            res -= g;
        }

        cout << (a[n-1] * (n + 1) - (sum + res)) / g << endl;
    }
    return 0;
}
