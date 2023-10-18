#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1005;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

ll arr[N][N];

bool vis[N][N];

ll sm = 0;

void dfs(ll x, ll y) {
	vis[x][y] = true;
	sm += arr[x][y];
	if(!vis[x + 1][y]) dfs(x + 1, y);
	if(!vis[x - 1][y]) dfs(x - 1, y);
	if(!vis[x][y + 1]) dfs(x, y + 1);
	if(!vis[x][y - 1]) dfs(x, y - 1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        ll n, m;
		cin >> n >> m;
		for(ll i = 1; i <= n; i++) {
			for(ll j = 1; j <= m; j++) {
				cin >> arr[i][j];
			}
		}
		for(ll i = 0; i <= n + 1; i++) {
			for(ll j = 0; j <= m + 1; j++) {
				if(1 <= i && i <= n && 1 <= j && j <= m) {
					if(arr[i][j] != 0) {
						vis[i][j] = false;
					}
					else {
						vis[i][j] = true;
					}
				}
				else {
					vis[i][j] = true;
				}
			}
		}
		ll maxi = 0;
		for(ll i = 1; i <= n; i++) {
			for(ll j = 1; j <= m; j++) {
				if(!vis[i][j]) {
					sm = 0;
					dfs(i, j);
					maxi = max(maxi, sm);
				}
			}
		}
		cout << maxi << endl;
    }
    return 0;
}
