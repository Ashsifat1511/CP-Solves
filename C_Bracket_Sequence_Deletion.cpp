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
        string s;cin >> s;
        int ans = 0, idx = 1, prev_idx = 0;
        stack<char> stk;
	    stk.push(s[0]);
        char start = s[0];
        while (idx < n) {
		    if (stk.empty()) stk.push(s[idx]);
		    else {
			    if (stk.top() == '(' && s[idx] == ')') stk.pop();
			    else stk.push(s[idx]);
                if (stk.empty()) {
				    prev_idx = idx + 1;
				    start = '#';
				    ++ans;
				    ++idx;
				    continue;
			    }
		    }

		    if (start == '#') start = s[idx];
		    else {
			    if (s[idx] == start) {
				    prev_idx = idx + 1;
				    start = '#';
				    stack<char> temp;
				    stk = temp;
				    ++ans;
				    ++idx;
				    continue;
			    }
		    }

		    ++idx;
	    }
        cout << ans << ' ' << (n - prev_idx)<<endl;
    }
    return 0;
}
