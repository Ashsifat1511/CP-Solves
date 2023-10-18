#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e5+5;

typedef  long long int ll;

#define pb push_back

ll dp[105][100005];

int w[105],v[105];

#define cs cout<<"Case "<<tc<<": "

ll cost(int id,int vl){
    if(vl==0) return 0;
    if(id<0) return 1e15;
    if(dp[id][vl]!=-1) return dp[id][vl];
    ll ans = cost(id-1,vl);
    if(vl-v[id]>=0) ans = min(ans,cost(id-1,vl-v[id])+w[id]);
    return dp[id][vl]=ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(dp,-1,sizeof(dp));
    int n,wt;cin>>n>>wt;
    forn cin>>w[i]>>v[i];
    int val = 1e5;
    for(int i=val;i>=0;i--){
        if(cost(n-1,i)<=wt) {
            cout<<i<<endl;break;
        }
    }
    return 0;
}
