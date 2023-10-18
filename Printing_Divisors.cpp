#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(int argc, const char *argv[]) {

    // for fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for(int ts = 1; ts <= t; ++ts) {
        ll n;
        cin >> n;

        vector <ll> ans {1};
        for(ll i = 2; i*i <= n; ++i) {
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }

            bool flag = false;
            int x = i;
            int current_size = ans.size();
            while (cnt > 0) {
                if (flag) {
                    for(int i = 0; i < current_size; ++i) ans.push_back(ans[i] * x);
                }
                else {
                    for(int i = current_size-1; i >= 0; --i) ans.push_back(ans[i] * x);
                }
                flag ^= true;
                x *= i;
                cnt--;
            }
        }

        if (n > 1) {
            for(int i = ans.size()-1; i >= 0; --i) ans.push_back(n * ans[i]);
        }

        cout << "Case " << ts << ":\n";
        for(ll x : ans) {
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
} 