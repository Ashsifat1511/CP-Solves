#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

int f(int x) {
  return x * (x - 1) / 2;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n, k; cin >> n >> k;
        bool found = false;
        for (int i = 0; i <= n; i++) {
            int j = n - i;
            if (f(i) + f(j) == k) {
                cout << "YES\n";
                while (i--) cout << 1 << ' ';
                while (j--) cout << -1 << ' ';
                cout << '\n';
                found = true;
                break;
             }
        }   
        if (!found) cout << "NO\n" ;       
    }
    return 0;
}
