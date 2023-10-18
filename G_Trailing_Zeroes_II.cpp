#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define forn for(ll i = 0; i < n; i++)
#define pb push_back
#define tc ll tt, qq=0; cin>>tt; while(qq++<tt)
#define cs cout<<"Case "<<qq<<": "
const ll N = 2e5+5;
int calc_func(int n, int x)
{
    int c = 0;
    while(n>0)
    {
        c+=n/x;
        n = n / x;
    }
    return c;
}
int func(int n, int x)
{
    int c = 0;
    while(n % x == 0)
    {
        c++;
        n = n / x;
    }
    return c;
}
int main(){
 tc{
        int a,b,c,d,e,f,i,j,k,l,m,o,n,r,p,q,ans,x,y;
        cin>>n>>r>>p>>q;
        f=n-r;
        i=calc_func(n,2);
        j=calc_func(n,5);
        k=calc_func(r,2);
        l=calc_func(r,5);
        m=calc_func(f,2);
        o=calc_func(f,5);
        x=func(p,2);
        y=func(p,5);
        ans=min(i-k-m+(x*q),j-l-o+(y*q));
        cs<<ans<<endl;
 }
}
