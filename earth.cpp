#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n1 ,  n2 ,  x ,  y;
ll op(ll n ){
    ll xx = n / x;
    ll yy = n / y;
    ll sem = n / (x * y);
    n-=(xx + yy - sem);
    xx-=sem;
    yy-=sem;
    if(max(n1 - yy , 0LL) + max(n2 - xx,0LL) <= n)return 1;
    return 0;
}

ll binSearch(ll lo , ll hi){
    ll mid = (lo + hi) / 2;
    if(lo == hi)return lo;
    if(op(mid))return binSearch(lo , mid);
    return binSearch(mid + 1 , hi);
}
const ll maxi = (1LL << 12LL);
int main(){
    ll t;cin>>t;
    while(t--){


    cin>>n1>>n2>>x>>y;
    cout<<binSearch(1 , maxi)<<endl;
    }

}
