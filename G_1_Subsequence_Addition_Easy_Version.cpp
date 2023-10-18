#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        long long sum = 1;
        bool ok = a[1] == 1;
        for (int i = 2; i <= n; i++) {
            if (a[i] <= sum) {
            sum += a[i];
        }
        else {
            ok = false;
            break;
        }
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}