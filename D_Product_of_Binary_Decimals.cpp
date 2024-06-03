#include <bits/stdc++.h>
using namespace std;
 
#define Bishal ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define endl '\n'
#define sz(x) (int)(x).size()
ll toBinary(int n)
{
    string r;
    while(n!=0){
        r=(n%2==0 ?"0":"1")+r;
    }
    ll num=stoi(r)*1LL;
    return num;
}
 
void solve(unordered_map<int,bool>mp) {
 int n;
 cin>>n;
 if(mp.find(n)==mp.end())
 cout<<"NO"<<endl;
 else
 cout<<"YES"<<endl;
}
 
int main() {
    Bishal;
    ll t;
    cin >> t;
    unordered_map<int,bool>mp;
    for(int a=1;a<=31;a++)
    {
        ll bA=toBinary(a);
        if(bA>100000)break;
        for(int b=1;b<=31;b++)
        {
            ll bB=toBinary(b);
            if(bA*bB>100000)break;
            for(int c=1;c<=31;c++)
        {
            ll bC=toBinary(c);
            if(bA*bB*bC>100000)break;
            for(int d=1;d<=31;d++)
        {
            ll bD=toBinary(d);
            if(bA*bB*bC*bD>100000)break;
            for(int e=1;e<=31;e++)
        {
            ll bE=toBinary(e);
            if(bA*bB*bC*bD*bE>100000) break;
            mp[bA*bB*bC*bD*bE]=true;
 
            
        }
            
        }
        }
        }
    }
    while (t--) {
        solve(mp);
    }
    return 0;
}