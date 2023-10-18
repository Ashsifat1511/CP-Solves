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
        int n; cin >> n;
        int x = 1e9 + 7, pos = -1;
        forn{
            int a; cin >> a;
            if (a < x) x = a, pos = i;
        }
        cout << n - 1 << endl;
        forn{
            if (i == pos) continue;
            cout << pos + 1 << ' ' << i + 1 << ' ' << x << ' ' << x + abs(i - pos) <<endl;
        }
    }
    return 0;
}
