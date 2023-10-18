#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e5+7;

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
        int a[N];
        int c[N],cnt;
		int ans=0;
		for(int i=1;i<=m;++i) cin>>a[i];
        sort(a+1,a+m+1);
		for(int i=1;i<m;++i) c[i]=a[i+1]-a[i]-1;
		c[m]=a[1]-1+n-a[m];
		sort(c+1,c+m+1);
		for(int i=m;i;--i){
            if(c[i]-(m-i)*4==1) ++ans;
			else ans+=max(0,c[i]-(m-i)*2-(m-i)*2-1);
		}
		cout<<n-ans<<endl;
    }
    return 0;
}
