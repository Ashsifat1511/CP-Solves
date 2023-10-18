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
    //cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n;cin>>n;
        vector<int> v(n);
        v[0]=0;
        for(int i=1;i<=n-1;i++) cin>>v[i];
        sort(all(v));
        int flag=0,ans;
        for(int i=1;i<=n-1;i++){
            if(v[i]!=i) {
                flag++;
                ans=i;
                break;
            }
        }
        if(flag!=0) cout<<ans<<endl;
        else cout<<n<<endl;        
    }
    return 0;
}
