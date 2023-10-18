#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
ll find(ll x, vector<ll> &v){
    return (v[x] == x) ? x : (v[x] = find(v[x], v));
    }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;cin>>n;
    vector<ll> f(n + 1, 0);
    for(ll i = 1; i <= n; i++) f[i] = i;
    vector<pair<ll, ll> > rem;
    for(int i = 1; i < n; i++){
        ll x, y; cin>>x>>y;
        ll r = find(x, f);
        ll s = find(y, f);
        if(r == s) rem.push_back(make_pair(x, y));
        else f[s] = r;
    }
    vector<pair<ll, ll> > add;
    for(int i=2;i<=n;i++){
        if(find(i, f) == find(1, f)) continue;
        add.push_back(make_pair(find(i, f), 1));
        f[find(i, f)] = find(1, f);
    }
    cout<<rem.size()<<endl;
    for(int i=0;i<rem.size();i++) cout<<rem[i].first<<" "<< rem[i].second<<" "<<add[i].first<<" "<<add[i].second<<endl;
    return 0;
}
