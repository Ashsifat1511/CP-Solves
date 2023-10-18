#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;
const int N=1e6+5;
int p[N];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;cin>>n>>a>>b;
        set<int> st;
        ll sol = 0 , ans = 2e18;
        for(int i = 1;i <= n;i++) {
            int x;cin>>x;
            if(st.find(x) == st.end()) st.insert(x);
            else sol += a;
        }
        int c = 0;
        for(auto x : st) p[++c] = x;
        for(int i = 1;i <= c;i++) ans = min(ans , 1LL*(p[i] - i)*b + 1LL*(c-i)*a);
        ans = min(ans , 1LL*c*a + b) ;
        cout<<ans+sol<<endl;
    }
    return 0;
}