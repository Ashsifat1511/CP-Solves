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
        int n, f, k; cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int favorite_value = a[f - 1];
        sort(a.rbegin(), a.rend());
        int count_favorite_in_top_k = 0;
        int count_favorite_total = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] == favorite_value) {
                count_favorite_total++;
                if (i < k) {
                    count_favorite_in_top_k++;
                }
            }
        }
        if (count_favorite_in_top_k == count_favorite_total) cout << "YES" << endl;
        else if (count_favorite_in_top_k == 0) cout << "NO" << endl;
        else cout << "MAYBE" << endl;
    }
    return 0;
}
