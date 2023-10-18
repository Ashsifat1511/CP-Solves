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
       int n, m;
	    cin >> n >> m;
	    int cnt[n + 1];
	    for (int i = 1; i <= n; i++) cnt[i] = 0;
	    for (int i = 0; i < m; i++) {
		    int u, v;
		    cin >> u >> v;
		    cnt[u]++;
		    cnt[v]++;
	    }
	    map<int, int> cnts;
	    for (int i = 1; i <= n; i++) cnts[cnt[i]]++;
	    vector<int> v;
	    for (auto p : cnts) v.push_back(p.second);
	    sort(v.begin(), v.end());
	    if (v.size() == 3) cout << v[1] << ' ' << v[2] / v[1] << '\n';
	    else cout << v[0] - 1 << ' ' << v[1] / (v[0] - 1) << '\n'; 
    }
    return 0;
}
