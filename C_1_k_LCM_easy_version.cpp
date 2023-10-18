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
        int n, k;cin >> n >> k;
        if (n % 2) cout << 1 << ' ' << n / 2 << ' ' << n / 2 << endl;
        else if (n % 2 == 0 && n % 4) cout << 2 << ' ' << n / 2 - 1 << ' ' << n / 2  - 1 << endl;
        else cout << n / 2 << ' ' << n / 4 << ' ' << n / 4 << endl;
    }
    return 0;
}