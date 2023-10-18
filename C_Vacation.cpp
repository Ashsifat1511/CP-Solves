#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

bool cmp(int a,int b)
{
    return a<b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    int dp[n][3];
    cin>>dp[0][0]>>dp[0][1]>>dp[0][2];
    for (int i = 1; i < n; i++) {
        int a, b, c; cin>>a>>b>>c;
        dp[i][0] = a + max(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = b + max(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = c + max(dp[i-1][0], dp[i-1][1]);
    }
    cout<<max({dp[n-1][0], dp[n-1][1], dp[n-1][2]},cmp);
    return 0;
}
