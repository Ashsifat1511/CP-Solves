#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2 || n<4) cout<<"-1"<<endl;
        else if(n%4==0 && n%6==0) cout<<n/6<<" "<<n/4<<endl;
        else cout<<(ll)ceil(n/6.0)<<" "<<(ll)ceil(n/4.0)<<endl;
    }
    return 0;
}