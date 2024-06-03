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
        int n;cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        int m;cin >> m;
        unordered_map<int, int> d_count;
        for (int i = 0; i < m; i++) {
            int d;
            cin >> d;
            d_count[d]++;
        }
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                int required = b[i];
                if (d_count[required] > 0) {
                    d_count[required]--;
                } else {
                    flag = false;
                    break;
                }
            }
        }
        for (auto it : d_count) {
            if (it.second > 0) {
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
