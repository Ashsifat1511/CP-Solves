#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e5+5;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

vector<int> graph[N];

int vis[N];
vector<int> ans;
vector<int> dp(N);

void dfs(int x){
    vis[x]=1;
    for(auto child: graph[x]){
        if(!vis[child]) dfs(child);
    }
        ans.pb(x);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        graph[a].pb(b);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]) dfs(i);
    }
    reverse(ans.begin(), ans.end());
    for (auto i: ans) {
        for (auto j: graph[i])
            dp[j] = max(dp[j], dp[i] + 1);
    }
    cout<<*max_element(dp.begin(), dp.end());
    return 0;
}
