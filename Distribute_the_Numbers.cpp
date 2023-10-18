#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define tc ll tt, qq=0; cin>>tt; while(qq++<tt)
#define cs cout<<"Case "<<qq<<": "
#define csl cout<<"Case "<<qq<<":"<<endl
ll n1 , n2 , x , y;
ll op(ll n){
    ll forn1 = n / y;
    ll forn2 = n / x;
    ll com = n / (x * y);
    forn1 -= com;
    forn2 -=com;
    ll tempn1 = n1;
    ll tempn2 = n2;
    tempn2 -= min(forn2 , tempn2);
    tempn1 -= min(forn1 , tempn1);
    n -= min(n , forn1 + forn2 + com);
    if(tempn1 + tempn2 <= n)return 1;
    return 0;
 
}
ll binSearch(ll lo , ll hi){
    if(lo == hi)return hi;
    ll mid = (lo + hi) / 2;
    if(op(mid))return binSearch(lo , mid);
    return binSearch(mid + 1 , hi);
}
ll maxi = 1LL<<35LL;
int main(){
    tc{
        cin>>n1>>n2>>x>>y;
        cout<<binSearch(1LL , maxi)<<endl;
    }
}