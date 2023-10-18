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
        int n, m; cin >> n >> m;
        vector<vector<int>> a(m + 1);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
            int x; cin >> x; 
            a[j].push_back(x);
        }
    }
    long long ans = 0;
    for (int j = 1; j <= m; j++) {
        sort(a[j].begin(), a[j].end());
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            ans += 1LL * a[j][i] * i - sum;
            sum += a[j][i];
        }
    }
    cout << ans <<endl;
    }
    return 0;
}
