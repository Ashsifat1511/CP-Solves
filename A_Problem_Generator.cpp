#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

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
        int n,m; cin>>n>>m;
        unordered_map<char,int> mp;
        string s; cin>>s;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for (char c = 'A'; c <= 'G'; ++c) {
            if (mp[c] < m) {
                ans += (m - mp[c]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
