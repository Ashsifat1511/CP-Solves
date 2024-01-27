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
        ll n; cin>>n;
        map<ll,bool>m; 
        ll a=0,b=0,flag=0;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            if(i%2==0) a+=x; 
            else b+=x;
            if(a-b==0 || m[a-b]){
                flag=1;
            }
            m[a-b]=true;
        }
        if(flag==0)    cout<< "NO\n";
        else    cout<< "YES\n";
    }
    return 0;
}
