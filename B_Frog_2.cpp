#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e5+7;

int h[N],DP[N];

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

int cost(int i,int k){
    if(i==0) return 0;
    if(DP[i]!=-1) return DP[i];
    int ans=INT_MAX;
    for(int j=1;j<=k;j++){
        if(i-j>=0) ans = min(ans,cost(i-j,k)+abs(h[i]-h[i-j]));
    }
    return DP[i]=ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(DP,-1,sizeof(DP));
    int n,k;cin>>n>>k;
    forn cin>>h[i];
    cout<<cost(n-1,k)<<endl;
    return 0;
}
