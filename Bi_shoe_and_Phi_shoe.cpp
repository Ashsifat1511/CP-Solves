#include <bits/stdc++.h>
using namespace std;
bitset<6000008> mark;
void sieve()
{
    mark[0] = mark[1] = 1;
    for (int i = 4; i <= 4e6; i += 2)
        mark[i] = 1;
    for (int i = 3; i * i <= 4e6; i += 2)
    {
        if (!mark[i])
        {
            for (int j = i * i; j <= 4e6; j += 2 * i)
                mark[j] = 1;
        }
    }
}
int main()
{
    sieve();
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            num++;
            for (int j = num;; j++)
            {
                if (mark[j] == 0)
                {
                    ans += j;
                    break;
                }
            }
        }
        cout << "Case " << k << ": " << ans << " " << "Xukha" << endl;
    }
}
