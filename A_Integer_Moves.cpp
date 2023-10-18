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
        int x, y;cin >> x >> y;
        int d = x * x + y * y,r=0;
        while (r * r < d) ++r;
        int ans = 2;
        if (r * r == d) ans = 1;
        if (x == 0 && y == 0) ans = 0; 
        cout << ans << '\n';
    }
    return 0;
}
