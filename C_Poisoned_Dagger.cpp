#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,h;cin>>n>>h;
        ll  v[n];
        forn cin>>v[i];
        ll lo=1,hi=1e18,sum;
        while(lo<=hi){
            ll mid = (lo+hi)/2;
            sum = mid;
            for(ll i=0;i<n-1;i++) sum+= min(mid,v[i+1]-v[i]);
            if(sum<h) lo = mid+1;
            else hi = mid-1;
        }
        cout<<hi+1<<endl;
    }
    return 0;
}
