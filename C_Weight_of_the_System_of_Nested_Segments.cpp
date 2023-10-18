#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back
#define FOR(i, a, b)        for (int(i) = (a); (i) < (b); ++(i))
#define cs cout<<"Case "<<tc<<": "
struct Point {
	int x, w, pos;
};
static bool compare(const Point a, const Point b) {
	return (a.w < b.w);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n, m;
	cin >> n >> m;

	vector<Point> pts(m);

	FOR (i, 0, m) {
		cin >> pts[i].x >> pts[i].w;
		pts[i].pos = i + 1;
	}

	sort(pts.begin(),pts.end(),compare);

	int sum = 0;
	vector<pair<int, int> > loc;

	FOR (i, 0, 2 * n) {
		sum += pts[i].w;
		loc.pb({pts[i].x, pts[i].pos});
	}

	cout << sum << '\n';

	sort(all(loc));

	FOR (i, 0, n) {
		cout << loc[i].second << ' ' << loc[(2 * n) - i - 1].second << '\n';
	}
    }
    return 0;
}
