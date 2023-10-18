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
        ll n; cin>>n;
        vector<pair<ll, ll> > a(n);
        for(ll i = 0; i < n; i++){
            cin>>a[i].first;
             a[i].second = i + 1;
            }
        sort(a.begin(), a.end());
        ll cnt(0);
        for(ll i = 0; i < n; i++){
            for(ll j = i + 1; j < n; j++){
                if(a[i].first * a[j].first > 2 * n) break;
                cnt += (a[i].first * a[j].first == a[i].second + a[j].second);
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
