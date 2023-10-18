#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 510;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
ll dist[N][N];

const int INF=INT_MAX;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){
            cin>>dist[i][j];
        }
    }
    vector<int> dorder(n);
    forn cin>>dorder[i];
    reverse(all(dorder));
    vector<ll> ans;
    for(int k=0;k<n;k++){
        int k_v=dorder[k];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                ll dis = dist[i][k_v]+dist[k_v][j];
                dist[i][j]=min(dist[i][j],dis);
            }
        }
        ll sum=0;
            for(int i=0;i<=k;i++){
                for(int j=0;j<=k;j++){
                    sum+=dist[dorder[i]][dorder[j]];
                }
            }
        ans.pb(sum);  
    }
    reverse(all(ans));
    for(auto answer:ans) cout<<answer<<" ";
    return 0;
}
