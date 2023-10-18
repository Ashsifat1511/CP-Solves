#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e5+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
int n, ans[N];

void recurse(int r) {
	if (r < 0) return;
	int s = sqrt(2*r); s *= s;
	int l = s - r; recurse(l - 1);
	for (; l <= r; l++, r--) {
		ans[l] = r; ans[r] = l;
	}
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin >> n; recurse(n - 1);
		for (int i = 0; i < n; i++)
			cout << ans[i] << ' ';
		cout <<endl;
    }
    return 0;
}
