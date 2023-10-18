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
        vector<int> a(n);
        int zero = 0, one = 0, two = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                zero = 1;
            }

            if (a[i] == 1)
            {
                one = 1;
            }

            if (a[i] == 2)
            {
                two = 1;
            }
        }
        if (one && zero || one && two)
        {
            cout << "NO" << endl;
            continue;
        }
        if (one)
        {
            string ans = "YES";
            sort(a.begin(), a.end());
            for (int i = 1; i < n; i++)
            {
                if (abs(a[i] - a[i - 1]) == 1)
                {
                    ans = "NO";
                    break;
                }
            }
            cout << ans << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
