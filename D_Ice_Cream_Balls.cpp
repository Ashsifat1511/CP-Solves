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
        ll n;
        cin >> n;
        ll lo = 2, hi = 2648956421, mid, ans = 2;
        while (lo <= hi)
        {
            mid = lo + hi >> 1;
            ll val = (mid * (mid - 1)) / 2;
            if (val <= n)
            {
                ans = mid + (n - val);
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
