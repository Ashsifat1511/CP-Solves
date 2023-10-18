#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;
void solve();
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}

void solve(){
    int n;cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++) cin>>arr[i];
        for(int i=1;i<=n;i++) {
            if(arr[i] <= i) {
                cout<<"YES\n";
                return;
            }
        }
    cout<<"NO\n";
}