#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
void solve();
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for (auto &i : l) {
        cin >> i;
    }
    for (int cnt_liars = 0; cnt_liars <= n; ++cnt_liars) {
        int actual = 0;
        for (auto i : l) {
            if (!(cnt_liars >= i)) {
                ++actual;
            }
        }
        if (actual == cnt_liars) {
            cout << cnt_liars << '\n';
            return;
        }
    }
    cout << "-1\n";
}