#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 2*1e5+5;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    int a[N],b[N];
    for(int tc=1;tc<=t;tc++)
    {
        int n;cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
        int mx=INT_MIN;
        for(int i=1;i<=n;i++)mx=max(mx,a[i]-b[i]);
        int c=0;
        for(int i=1;i<=n;i++)c+=(a[i]-b[i]==mx);
        cout<<c<<"\n";
        for(int i=1;i<=n;i++)if(a[i]-b[i]==mx)cout<<i<<' ';
        cout<<"\n";
    }
    return 0;
}
