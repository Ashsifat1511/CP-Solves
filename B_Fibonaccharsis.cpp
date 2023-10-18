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
        int n, k;
        cin >> n >> k;
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int second = n; 
            int first = i;
            bool valid_seq = true;
            for (int j = 0; j < k - 2; j++) {
                int fx = first;
                first = second - fx;
                second = fx;
                valid_seq &= first <= second;
                valid_seq &= min(first, second) >= 0;
                if (!valid_seq) break;
            }
            if (valid_seq) ans++;
        }
 
        cout << ans << endl;
    }
    return 0;
}
