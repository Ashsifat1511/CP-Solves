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
        ll x;cin>>x;
        cout<<__builtin_popcountll(x)<<endl;
    }
    return 0;
}