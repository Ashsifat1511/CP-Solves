#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N =2e5+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
int arr[N];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q;cin>>n>>q;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        arr[i]+=(arr[i-1]^x);
    }
    while(q--){
        int a,b;cin>>a>>b;
        int ans = arr[b]^arr[a-1];
        cout<<ans<<endl;
    }
    return 0;
}
