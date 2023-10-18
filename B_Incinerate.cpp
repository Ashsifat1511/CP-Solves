#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
void solve();
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++) solve();
    return 0;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n), p(n);
    for (auto &i : h)
        cin >> i;
 
    for (auto &i : p)
        cin >> i;
 
    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0);
    sort(ord.begin(), ord.end(), [&](auto x, auto y) { return p[x] < p[y]; });
 
    int dmg = 0;
    bool f = true;
    for (int i : ord)
    {
        if (h[i] <= dmg)
            continue;
 
        if (i != ord[0])
            k -= p[i];
 
        if (k > 0)
        {
            dmg += k;
            while (h[i] > dmg)
            {
                k -= p[i];
                if (k < 0)
                    break;
                dmg += k;
            }
        }
 
        if (h[i] > dmg)
        {
            cout << "NO\n";
            return;
        }
    }
 
    cout << "YES\n";
}