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
        if(m%2==0) cout<<n*m/2<<endl;
        else{
            int ans = n*m/2;
            if(n<m) ans-=n/2;
            else ans =  ans - n/2-n%2;
            cout<<ans<<endl;
        }
    }
    return 0;
}
