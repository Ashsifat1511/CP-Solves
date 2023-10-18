#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define cs cout<<"Case "<<tc<<": "
#define pb push_back

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll fact[21];
    fact[0]=fact[1]=1;
    for(int i=2;i<=20;i++) fact[i]=i*fact[i-1];
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        ll n;cin>>n;
        vector<int> v;
        for(int i=20;i>=0;i--){
            if(fact[i]<=n) {v.pb(i);n-=fact[i];}
        }
        if(n==0){
            cs;
            for(int i=v.size()-1;i>=0;i--){
                if(i==0) cout<<v[i]<<"!\n";
                else cout<<v[i]<<"!+";
            }
        }    
        else cs<<"impossible\n";    
    }
    return 0;
}
