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
    int tt=1;
    cin>>tt;
    for(int tc=1;tc<=tt;tc++)
    {
        int n, i, j, cnt, t;
        pair < int, int > a[101], ans[10001];
        cin >> n;
        cnt = 0;t = 0;
        for (i = 1; i <= n; i++) cin >> a[i].first;
        for (i = 1; i <= n; i++) cin >> a[i].second;
        for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (a[i] < a[j]) ans[++t] = {i,j},
                swap(a[i], a[j]);
        for (i = 1; i < n; i++)
            if (a[i].first <= a[i + 1].first && a[i].second <= a[i + 1].second) cnt++;
            if (cnt == n - 1) {
                    cout << t << "\n";
                    for (i = 1; i <= t; i++) cout << ans[i].first << " " << ans[i].second << "\n";
                }
    else cout << -1 << "\n";
    }
    return 0;
}
