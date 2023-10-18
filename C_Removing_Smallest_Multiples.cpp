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
        int n;cin >> n;
        string s;cin >> s;
        string mark(n, '1');
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                for (int j = i + 1; j <= n; j += i + 1)
                {
                    if (s[j - 1] == '1')break;
                    if (mark[j - 1] == '0') continue;
                    mark[j - 1] = '0';
                    ans += i + 1;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
