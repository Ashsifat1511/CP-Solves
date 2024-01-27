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
        int n, k, s, t; cin >> n >> k >> s >> t;
	    vector<int> x(n + 1), y(n + 1);
	    for (int i = 1; i <= n; i++) cin >> x[i] >> y[i];
	    ll ans = llabs(x[s] - x[t]) + llabs(y[s] - y[t]);
	    ll mins = LLONG_MAX / 2, mint = LLONG_MAX / 2;
	    for (int i = 1; i <= k; i++) {
		    mins = min(mins, llabs(x[s] - x[i]) + llabs(y[s] - y[i]));
		    mint = min(mint, llabs(x[t] - x[i]) + llabs(y[t] - y[i]));
	    }
	    ans = min(ans, mins + mint);
	    cout << ans << '\n';
    }
    return 0;
}
