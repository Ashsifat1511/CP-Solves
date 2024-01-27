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
        int n;cin >> n;
		vector<set<int>> a(n + 1);
		set<int> tm;
		for(int i = 0; i < n; ++i){
			int k;
			cin >> k;
			for(int j = 0; j < k; ++j){
				int x;
				cin >> x;
				a[i].insert(x);
				tm.insert(x);
			}
		}
		int res = 0;
		for(int i = 1; i <= 50; ++i){
			set<int> ans;
			for(int j = 0; j < n; ++j){
				if(a[j].find(i) != end(a[j])) continue;
				else{
					for(auto k: a[j]) ans.insert(k);
				}
			}
			if(ans.size() != tm.size()) res = max(res, (int)ans.size());
		}
		cout << res << endl;
    }
    return 0;
}
