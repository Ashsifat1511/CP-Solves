#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 30;

vector<int> cnt(N, 0);
vector<bool> ans;

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
        int op, v;
        cin >> op >> v;

        if (op == 1) {
            cnt[v]++;
        } else {
            int nw = 0;
            int parbe = true;
            for (int i = 0; i < N; ++i) {
                int r = (v >> i) & 1;
                if (r > nw + cnt[i]) {
                    parbe = false;
                    break;
                }
                v -= r;
                nw = (nw + cnt[i] - r) / 2;
            }
            if(!parbe)ans.push_back(false);
            else if (nw >= (v >> 30)) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }
    }

    for (bool x : ans) {
        cout << (x ? "YES" : "NO") << endl;
    }
    
    return 0;
}