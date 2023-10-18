#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

ll pf[N];

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n,q;cin>>n>>q;
        for(int i=1;i<=n;i++){
            int x;cin>>x;
            pf[i]=pf[i-1]+x;
        }
        while(q--){
            int l,r,k;cin>>l>>r>>k;
            ll sum = pf[l-1]+(pf[n]-pf[r])+k*(r-l+1);
            if(sum&1) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
