#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
ll lcm(ll a,ll b){
    ll g=__gcd(a,b);
    return (a*b/g);
}
void solve(){
    ll n; cin>>n;
    vector<ll> a(n+2,1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<ll> b(n+2,1);
    for(ll i=1;i<=n+1;i++){
        b[i]=lcm(a[i],a[i-1]);
    }
    for(ll i=1;i<=n;i++){
        if(__gcd(b[i],b[i+1])!=a[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++) solve();
    return 0;
}
