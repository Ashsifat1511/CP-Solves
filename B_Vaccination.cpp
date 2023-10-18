#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, d, w; cin >> n >> k >> d >> w;
    vector<int> t(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> t[i];
    }
    int ans = 0;
    int i = 1;
    while (i <= n) {
      int x = t[i] + w;
      int j = i, taken = 0;
      while (j <= n and t[j] <= x and taken < k) {
        ++j;
        ++taken;
      }
      ans++;
      while (taken < k and j <= n and t[j] - x <= d) {
        ++j; taken++;
      }
      i = j;
    }
    cout << ans << endl;
    }
    return 0;
}