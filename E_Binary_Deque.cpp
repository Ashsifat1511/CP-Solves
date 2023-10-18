#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define forn for (int i = 0; i < n; i++)

const int N = 1e6 + 7;

typedef long long int ll;

#define pb push_back

#define cs cout << "Case " << tc << ": "

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        int n, s;
        cin >> n >> s;
        vector<pair<int, int>> pos;
        int ans = 0;
        int sum = 0;
        vector<int> a(n);
        pos.push_back(make_pair(0, -1));
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] == 1) pos.push_back(make_pair(sum, i));
            if (sum >= s)
            {
                int p = sum - s;
                pair<int, int> x = make_pair(p, -3);
                auto pt = lower_bound(pos.begin(), pos.end(), x);
                int z = i - (*pt).second;
                ans = max(ans, z);
            }
        }
        if (sum < s)
        {
            cout << -1 << endl;
            continue;
        }
        cout << n - ans << endl;
    }
    return 0;
}
