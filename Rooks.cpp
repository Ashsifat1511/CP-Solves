#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e9;

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
        ll test,n,m,t=0;
        cin>>n>>m;
        if(m>n){
            cs<<0<<endl;
            continue;
        }
        long long ans=1,fact=1;
        ll k =m;
        while(k)fact*=k--;

        while(m){
            ll gcd = __gcd(n*n,fact);

            ll tem = (n*n)/gcd;
            fact/=gcd;
            ans=(ans*tem);

            m--;
            n--;
        }
        cs<<ans<<endl;
    }
    return 0;
}
