#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
void inc(vector<ll> &v){
    for(int i=0;i<v.size();i++) v[i]+=1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        ll n,x;cin>>n>>x;
        vector<ll> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        ll ans=0,pre=0;
        for(int i=0; i<n; i++){
            if(x<v[i]) break;
            ll lo=0,hi=INT_MAX,flag=40;
            while(flag--){
                ll mid=(lo+hi)/2;
                ll temp=mid*i;
                if(x-temp>=v[i]+mid) lo=mid;
                else hi=mid;
            }
            ans+=lo+1;
            x-=v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
