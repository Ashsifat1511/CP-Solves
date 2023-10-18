#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1000;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
vector<vector<int>> g;
vector<ll> cnt;

void dfs(int v, int p) {
    if (g[v].size() == 1 && g[v][0] == p) {
        cnt[v] = 1;
    } else {
        for (auto u : g[v]) {
            if (u != p) {
                dfs(u, v);
                cnt[v] += cnt[u];
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n, q;
    cin >> n;
 
    g.assign(n, vector<int>());
    
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
 
    cnt.assign(n, 0);
    dfs(0, -1);
 
    cin >> q;
    for (int i = 0; i < q; i++) {
        int c, k;
        cin >> c >> k;
        c--; k--;
 
        ll res = cnt[c] * cnt[k];
        cout << res << '\n';
    }
    }
    return 0;
}
