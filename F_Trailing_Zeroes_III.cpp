#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define forn for(ll i = 0; i < n; i++)
#define pb push_back
#define tc ll tt, qq=0; cin>>tt; while(qq++<tt)
#define cs cout<<"Case "<<qq<<": "
const ll N = 2e5+5;
long long calculateTraillingZeros(long long number);
int main(){
    tc{
        int n;cin>>n;
        ll lo=1,hi=INT_MAX,ans=-1;
        while(lo<=hi){
            ll mid = (hi+lo)/2;
            ll flag = calculateTraillingZeros(mid);
            if(flag>n) hi = mid-1;
            else if(flag<n) lo  = mid+1;
            else{
                ans=mid;hi=mid-1;
            }
        }
        if(ans==-1) cs<<"impossible\n";
        else cs<<ans<<endl;
    }
}
long long calculateTraillingZeros(long long number) {
    long long traillingZeros = 0;
    for (long long i = 5; i <= number; i *= 5) traillingZeros += (number / i);
    return traillingZeros;
}
