#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e9+7;

typedef  long long int ll;

#define pb push_back

int dp[1005][1005];

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m; cin>>n>>m;
    vector<string> grid(n);
    for (auto &i: grid) cin>>i;
    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) if (grid[i][j] == '.') {
            if (i+1 < n && grid[i+1][j] == '.') (dp[i+1][j] += dp[i][j])%=N;
            if (j+1 < m && grid[i][j+1] == '.') (dp[i][j+1] += dp[i][j])%=N;
        }
    }
    cout<<dp[n-1][m-1];
    return 0;
}
