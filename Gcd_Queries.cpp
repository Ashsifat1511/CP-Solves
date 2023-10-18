#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

//const N= 1e5+10;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        ll arr[n+10]={0},front[n+10]={0},back[n+10]={0};
        for(int i=1;i<=n;i++) cin>>arr[i];
        for(int i=1;i<=n;i++){
            front[i]=__gcd(front[i-1],arr[i]);
        }
        for(int i=n;i>=1;i--){
            back[i]=__gcd(back[i+1],arr[i]);
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            ll gc=0;
            gc = __gcd(front[l-1],back[r+1]);
            cout<<gc<<endl;
        }
    }
    return 0;
}