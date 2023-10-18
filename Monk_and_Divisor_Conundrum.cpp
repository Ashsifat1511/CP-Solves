#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define forn for(ll i = 0; i < n; i++)
#define pb push_back
#define tc ll tt, qq=0; cin>>tt; while(qq++<tt)
#define cs cout<<"Case "<<qq<<": "
const ll N = 2e5+5;
ll hsh[N];
ll m_ct[N];

int main(){
    int n;cin>>n;
    forn{
        int x;cin>>x;hsh[x]++;
    }
    for(int i=1;i<N;i++){
        for(int j=i;j<N;j+=i){
            m_ct[i]+=hsh[j];
        }
    }
    int q;cin>>q;
    while(q--){
        int a,b;cin>>a>>b;
        int ans= m_ct[a]+m_ct[b];
        ll lc= (a*1LL*b)/__gcd(a,b);
        if(lc<N) ans-=m_ct[lc];
        cout<<ans<<endl;
    }
}