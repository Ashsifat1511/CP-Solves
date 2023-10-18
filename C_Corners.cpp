#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define forn for (int i = 0; i < n; i++)
const int N = 1e6 + 7;

typedef long long int ll;

#define pb push_back
const int INF = 1e9;
const int MAXN = 2000;
int a[MAXN][MAXN];
#define cs cout << "Case " << tc << ": "

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        int n, m, sum = 0;
        cin >> n >> m;
        string s;
        for (int i = 0; i < n; ++i)
        {
            cin >> s;
            for (int j = 0; j < m; ++j)
            {
                a[i][j] = s[j] - '0';
                sum += a[i][j];
            }
        }
        int minn = INF;
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = 0; j < m - 1; ++j)
            {
                int cnt = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
                if (cnt == 0)
                    continue;
                minn = min(minn, max(1, cnt - 1));
            }
        }
        if (sum == 0)
            cout << "0\n";
        else
            cout << 1 + sum - minn << "\n";
    }
    return 0;
}
