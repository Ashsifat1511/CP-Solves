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
        int N = 0;
        cin >> N;
        int ans = 0;
        vector<int> pr;
        pr.assign(N * N, -1);
        for (int i = 1; i <= N; ++i)
        {
            for (int j = 1; j <= N; ++j)
            {
                pr[i * j - 1] = 1;
            }
        }
        for (int mx = N * N; mx >= 1; --mx)
        {
            if (pr[mx - 1] == -1)
                continue;
            vector<vector<int>> a;
            int curans = -mx;
            bool br = false;
            a.assign(N, vector<int>());
            for (int j = N; j >= 1; --j)
            {
                int num = min(mx / j, N);
                if (num < 1)
                {
                    br = true;
                    break;
                }
                a[num - 1].push_back(j);
            }
            if (br)
                break;
            stack<int> s;
            for (int i = 0; i < N; ++i)
            {
                s.push(i + 1);
                bool brk = false;
                for (auto x : a[i])
                {
                    if (s.empty())
                    {
                        brk = true;
                        break;
                    }
                    curans += s.top() * x;
                    s.pop();
                }
                if (brk)
                    break;
            }
            ans = max(ans, curans);
        }
        cout << ans << "\n";
    }
    return 0;
}
