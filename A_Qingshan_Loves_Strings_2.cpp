#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

string s;
vector<int> op;
void solve(int l, int r) {
  if (l > r) return;
  assert(l != r);
  if (s[l] == s[r]) {
    if (s[l] == '0') {
      op.push_back(r);
      s.insert(s.begin() + r + 1, '0');
      ++r;
      s.insert(s.begin() + r + 1, '1');
      ++r;
      solve(l + 1, r - 1);
    }
    else {
      op.push_back(l - 1);
      s.insert(s.begin() + l, '1');
      s.insert(s.begin() + l, '0');
      r += 2;
      solve(l + 1, r - 1);
    }
  }
  else {
    solve(l + 1, r - 1);
  }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n; cin >> n;
    cin >> s;
    int o = 0, z = 0;
    for (int i = 0; i < n; i++) {
      o += s[i] == '1';
      z += s[i] == '0';
    }
    if (o != z) {
      cout << -1 << '\n';
    }
    else {
      op.clear();
      solve(0, n - 1);
      cout << op.size() << '\n';
      for (auto i: op) {
        cout << i + 1 << ' ';
      }
      cout << '\n';
    }
    }
    return 0;
}
