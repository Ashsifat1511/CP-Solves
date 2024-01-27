#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
bool bit(int mask, int pos) {
    return (mask >> pos) & 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int x;
        cin >> x;
        int p;
        vector<int> ans;
        ans.pb(x);
        for (int i = 0; ; ++i) {
            if (bit(x, i)) {
                if (x == (1 << i)) {
                    p = i;
                    break;
                }
                x -= (1 << i);
                ans.pb(x);
            }
        }
        while (p > 0) {
            x -= (1 << (p - 1));
            ans.pb(x);
            --p;
        }
        cout << ans.size()<<endl;
        for (int y : ans) {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}
