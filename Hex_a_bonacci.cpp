#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;
const int M = 10000007;
#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
      ll n,pf[10001];
      cin>>pf[0]>>pf[1]>>pf[2]>>pf[3]>>pf[4]>>pf[5]>>n;
      for(int i=6;i<=n;i++) pf[i] = ((pf[i-1])+(pf[i-2])+(pf[i-3])+(pf[i-4])+(pf[i-5])+(pf[i-6]))%M;
      cs<<pf[n]%M<<endl;
    }
    return 0;
}
