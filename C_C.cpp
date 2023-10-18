#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


vector<ll> commDiv(ll a, ll b)
{
    ll n = gcd(a, b);
    vector<ll> result;
    for (ll i = 2; i*i<=n; i++){
        if (n % i == 0) {
            if (n / i == i) result.pb(i);
            else{
                result.pb(i);
                result.pb(n/i);
            }
        }
    }
    return result;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b;cin>>a>>b;
    ll n = gcd(a,b);
    int x=0;
    for (ll i = 2; i*i<=n; i++){
        if(n%i==0){
            x++;
            while(n%i==0) n/=i;
        }
    }
    if(n>1) x++;
    cout<<x+1<<endl;
    return 0;
}
