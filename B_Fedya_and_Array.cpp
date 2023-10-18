#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        ll n = 2 * (a - b);
        cout << n << '\n';
        vector<ll> arr(n);
        int ptr = 0;
        for (ll c = b; c <= a; ++c) arr[ptr++] = c;
        for (ll c = a - 1; c > b; --c) arr[ptr++] = c;
        for (int i = 0; i < n; ++i) cout << arr[i] << " \n"[i == n - 1];
    }
    return 0;
}