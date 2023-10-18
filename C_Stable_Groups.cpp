#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, k, x; cin>>n>>k>>x;
    vector<ll> a(n); forn cin>>a[i];
    sort(a.begin(), a.end());
    vector<ll> d;
    for(int i=1;i<n;i++){
        ll diff = a[i] - a[i - 1];
        if(diff > x){d.push_back((diff - 1) / x);}
    }
    sort(d.begin(), d.end());
    ll res(d.size() + 1);
    for(int i=0;i<d.size();i++){
        if(k >= d[i]){
            k -= d[i]; 
            --res;
        }
        else break;
    }
    cout<<res<<endl;
}