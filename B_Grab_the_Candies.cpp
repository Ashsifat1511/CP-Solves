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
        int n;cin>>n;
        vector<int> v(n);
        forn cin>>v[i];
        int oddc=0,evenc=0,m=0,b=0;
        forn{
            if(v[i]%2!=0) oddc+=v[i];
            else evenc+=v[i];
        }
        if(oddc>=evenc) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}