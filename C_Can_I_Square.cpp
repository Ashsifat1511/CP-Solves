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
        ll n;cin>>n;
        ll sum =0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }
        ll ans = sqrt(sum);
        if(ans*ans==sum) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
