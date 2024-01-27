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
        int n;
        string s; 
        cin >> n >> s;
        vector<int> v;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') v.push_back(n - i - 1);
        }
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            if (i < v.size()) {
            ans += v[i] - i;
        }
        else ans = -1;
        cout << ans << ' ';
    }
    cout << endl;
    }
    return 0;
}
