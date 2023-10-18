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
    // cin>>t;
    for (int tc = 1; tc <= t; tc++)
    {
        string s;
        cin >> s;
        ll repeat = 0, m = 0;
        char last;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != last)
            {
                m = max(m, repeat);
                repeat = 1;
            }
            else repeat++;
            last = s[i];
        }
        m = max(m, repeat);
        repeat = 1;
        cout << m << endl;
    }
    return 0;
}
