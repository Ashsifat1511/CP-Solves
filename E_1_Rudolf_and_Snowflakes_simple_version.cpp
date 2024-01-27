#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
set<long long> nums;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (ll k = 2; k <= 1000; ++k) {
        ll val = 1 + k;
        ll p = k*k;
        for (int cnt = 2; cnt <= 20; ++cnt) {
            val += p;
            if (val > 1e6) break;
            nums.insert(val);            
            p *= k;
        }
    }



    int _ = 0, __ = 1;
    cin >> __;

    for (int _ = 0; _ < __; ++_) {
        ll n;
        cin >> n;
        

        if (nums.count(n)) cout << "YES" << endl;
        else cout << "NO" << endl;

    }


    return 0;
}
