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
        int n, q; cin >> n >> q;
        vector<long long> a(n), pref, pmax(n);
        pref.push_back(0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            pref.push_back(pref.back() + a[i]);
            if(i==0){
                pmax[i] = a[i];
            }else{
                pmax[i] = max(pmax[i-1], a[i]);
            }
        }

        for(int i = 0; i < q; i++){
            int k; cin >> k;
            int idx = upper_bound(pmax.begin(), pmax.end(), k)-pmax.begin();
            cout << pref[idx] << " ";            
        }
        cout << endl;
    }
    return 0;
}
