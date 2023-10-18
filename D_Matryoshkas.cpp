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
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> cnt;
        set<int> b;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            cnt[a[i]]++;
            b.insert(a[i]);
            b.insert(a[i] + 1);
        }
        int last = 0;
        int res = 0;
        for (auto x: b) {
            int c = cnt[x];
            res += max(0, c - last);
            last = c;
        }
        cout << res <<endl;
    }
    return 0;
}