#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;
void solve();
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}

void solve(){
    int n;
    string s;
    cin >> n >> s;
    set<string> se;
    forn {
        string ss;
        for(int k = 0; k < 5 && i + k < n; k++) {
            ss.push_back(s[i + k]);
            se.insert(ss);
        }
    }
    for(int len=1;len<6;len++) {
        string t(len, 'a');
        while(true) {
            if(se.count(t) == 0) {
                cout << t << '\n';
                return;
            }
            int idx = len - 1;
            while(idx >= 0 && t[idx] == 'z') {
                t[idx] = 'a';
                idx--;
            }
            if(idx < 0) break;
            t[idx]++;
        }
    }
}