#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

int highest_bit(int n) {
    int highest = 0;
    while (n > 0) {
        n >>= 1;
        highest++;
    }
    return highest;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n, m; cin >> n >> m;
        if (m == 0) {
            cout << n << endl;
            continue;
        }
        int result;
        if (n == 0) {
            result = 1;
        } else {
            int highest_bit = 31 - __builtin_clz(n); 
            result = (1 << (highest_bit + 1)) - 1; 
        }
        cout << result <<  endl;
    }
    return 0;
}
