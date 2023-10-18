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
        int n;
        cin >> n;
        int cnt1 = 0;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
            {
                cnt1++;
            }
        }
        if (cnt1 == n)
        {
            cout << 0 << endl;
        }
        else if (cnt1 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<pair<int, int>> res;
            for (int i = 1; i <= n; i++)
            {
                res.push_back({v[i], i});
            }

            sort(res.begin(), res.end());
            vector<pair<int, int>> ans;

            while (res[0].first != res[n - 1].first)
            {
                int val = res[0].first;
                for (int i = 1; i < n; i++)
                {
                    if (res[i].first != val)
                    {
                        res[i].first = (res[i].first + val - 1) / val;
                        ans.push_back({res[i].second, res[0].second});
                    }
                }
                sort(res.begin(), res.end());
            }
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i].first << " " << ans[i].second << endl;
                ;
            }
        }
    }
    return 0;
}
