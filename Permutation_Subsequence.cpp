#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)
typedef  long long int ll;
const ll M = 1e9+7;



int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll v[n];
        ll a=0,b=1;
        forn cin>>v[i];
        map<ll,ll> m;
        forn m[v[i]]++;
        for(int i=1;i<=n;i++){
            ll flag = b*m[i];
            flag%=M;
            a+=flag;b=flag;a%=M;
        }
        cout<<a<<endl;
    }
    return 0;
}