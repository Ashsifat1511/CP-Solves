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
        int n;cin >> n;
	    vector<int> a(n);
	    for (int& x : a) cin >> x;
	    ll ans = 0;
	    map<int, int> cnt;
	    for (int i = 0; i < n; i++) {
		    ans += cnt[a[i]];
		    if (a[i] == 1) ans += cnt[2];
		    else if (a[i] == 2) ans += cnt[1];
		    cnt[a[i]]++;
	    }
	    cout << ans << "\n";
    }
    return 0;
}
