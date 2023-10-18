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
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        if(n==1){
            cout<<n<<endl<<v[0]<<endl;
        }
        else{
            vector<int> ans;
            ans.pb(v[0]);
            for(int i=1;i<n;i++){
                if(v[i]<v[i-1]){
                    ans.pb(1);
                    ans.pb(v[i]);
                }
                else ans.pb(v[i]);
            }
            cout<<ans.size()<<endl;
            for(auto i: ans) cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}
