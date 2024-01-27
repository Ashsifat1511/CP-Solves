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
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n,m;cin>>n>>m;
        int temp1 = (n%m)/__gcd(n%m, m);
        int temp2 = m/__gcd(n%m, m);
        if(__builtin_popcount(temp2)>1) cout<<-1<<endl;
        else cout<<1ll * __builtin_popcount(temp1) * m - (n%m)<<endl;
    }
    return 0;
}
