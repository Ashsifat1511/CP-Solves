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
        int n,l,r;cin>>n>>l>>r;
        vector<int> a(n);
        forn cin>>a[i];
        sort(all(a));
        ll ans=0;
        for(int i=0;i<n-1;i++){
            auto itr1=lower_bound(a.begin()+i+1,a.end(),l-a[i]);
            auto itr2=upper_bound(a.begin()+i+1,a.end(),r-a[i]);
            ans+=(itr2-itr1);
        }   
        cout<<ans<<endl;   
    }
    return 0;
}
