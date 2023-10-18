#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;
const int MOD=1e9+7;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;cin>>k>>n;
        ll ans=1;
        forn ans=(ans*k)%MOD;
        cout<<ans<<endl;
    }
    return 0;
}