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
        int n; cin >> n;

        vector<vector<int>> cnt(12, vector<int>(12, 0));
        long long ans = 0;
        
        for(int i = 0;i < n; ++i) {
            string s; cin >> s;
            for(int j = 0;j < 2; ++j) {
                for(char c = 'a'; c <= 'k'; ++c) {
                    if(c == s[j]) continue;
                    string a = s; a[j] = c;
                    ans += cnt[a[0] - 'a'][a[1] - 'a'];
                }
            }
            ++cnt[s[0] - 'a'][s[1] - 'a'];
        }
        cout << ans << "\n";
    }
    return 0;
}
