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
        vector<int> a(n);

        int even1 = 0, even2 = 0, odd1 = 0, odd2 = 0;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(i % 2 == 0) {
                if(a[i] % 2 == 1) odd1 = 1;
                else even1 = 1; 
            } else {
                if(a[i] % 2 == 1) odd2 = 1;
                else even2 = 1;
            }
        }

        if(even1 && odd1) {
            cout << "NO\n";
        } else if(even2 && odd2) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
