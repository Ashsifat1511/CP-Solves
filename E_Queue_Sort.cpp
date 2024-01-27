#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

void solve(){
        ll n;cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        ll  ans = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] < a[ ans]) {
                 ans = i;
            }
        }
        for (int i =  ans + 1; i < n; ++i) {
            if (a[i] < a[i - 1]) {
                cout << -1 <<  endl;
                return;
            }
        }
        cout <<  ans <<  endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        solve();
    }
    return 0;
}
