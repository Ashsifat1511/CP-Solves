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
        string s;
		cin >> s;
		int ans = 1;
		if(s[0] == '0') ans = 0;
		if(s[0] == '?') ans = 9;
		for(int j = 1; j < s.size(); j++)
			if(s[j] == '?')
				ans *= 10;
		cout << ans << endl;
    }
    return 0;
}
