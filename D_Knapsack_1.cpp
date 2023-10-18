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
    int n,w; cin>>n>>w;
    vector<vector<ll>> dp(w+1, vector<ll>(n+1, 0));
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin>>a[i]>>b[i];

    ll ans = 0;
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j] = max(dp[i][j], dp[i][j-1]);
            if (i - a[j-1] >= 0)
                dp[i][j] = max(dp[i][j], dp[i-a[j-1]][j-1] + b[j-1]);
            ans = max(ans, dp[i][j]);
        }
    }
    cout<<ans;
    return 0;
}
