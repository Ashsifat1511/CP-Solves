#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> c(n);
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }
        vector<int> last(k, -1);
        vector<int> max_step(k), max2_step(k);
        for (int i = 0; i < n; ++i) {
            int step = i - last[c[i] - 1];
            if (step > max_step[c[i] - 1]) {
                max2_step[c[i] - 1] = max_step[c[i] - 1];
                max_step[c[i] - 1] = step;
            } else if (step > max2_step[c[i] - 1]) {
                max2_step[c[i] - 1] = step;
            }
            last[c[i] - 1] = i;
        }
        for (int i = 0; i < k; ++i) {
            int step = n - last[i];
            if (step > max_step[i]) {
                max2_step[i] = max_step[i];
                max_step[i] = step;
            } else if (step > max2_step[i]) {
                max2_step[i] = step;
            }
        }
        int ans = 1e9;
        for (int i = 0; i < k; ++i) {
            ans = min(ans, max((max_step[i] + 1) / 2, max2_step[i]));
        }
        cout << ans - 1 << "\n";
    }
    return 0;
}
