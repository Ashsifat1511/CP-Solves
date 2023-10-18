#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
ll ans(ll n,ll k);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        ll n,k;cin>>n>>k;
        cs<<ans(n,k)<<endl;
    }
    return 0;
}

ll ans(ll n,ll k){
    if(n==1) return 1;
    return ( ans (n-1,k) + k -1 ) %n +1 ;
}
