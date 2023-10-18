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
        int n;
        cin >> n;
        map <int,int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            for (int j = 2; j * j <= x; j++) {
                while (x % j == 0) {
                    x /= j;
                    a[j]++;
                }
            }
            if (x != 1) {
                a[x]++;
            }
        }

        int res = 0, rem = 0;

        for (pair <int, int> p : a) {
            int num = p.first;
            int cnt = p.second;
            res += cnt / 2;
            rem += cnt % 2;
        }

        res += rem / 3;
        cout << res << endl;        
    }
    return 0;
}
