#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
    cin >> n >> k;
    int L = 0, R = 55;
    while (n--) {
      int l, r;
      cin >> l >> r;
      if (l <= k && k <= r)
        L = max(L, l), R = min(R, r);
    }
    cout << (L == R ? "YES\n" : "NO\n");
    }
    return 0;
}