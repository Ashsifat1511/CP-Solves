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
        int n, m;
	cin >> n >> m;
	char g[n + 7][m + 7];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> g[i][j];
		}
	}
	for (int j = 0; j < m; j++) {
		int last = n - 1;
		for (int i = n - 1; i >= 0; i--) {
			if (g[i][j] == 'o') {last = i - 1;}
			else if (g[i][j] == '*') {swap(g[i][j], g[last][j]); last--;}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << g[i][j];
		}
		cout << '\n';
	}
    }
    return 0;
}
