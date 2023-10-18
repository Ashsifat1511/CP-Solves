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
        int m=n*(n-1)/2,b[m];
        for(int i=0;i<m;i++)cin>>b[i];
        sort(b,b+m);
        for(int i=0;i<m;i+=--n)cout<<b[i]<<' ';
        cout<<"1000000000\n";
    }
    return 0;
}
