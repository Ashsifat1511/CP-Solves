#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int p,s,r;
        cin>>p>>s>>r;
        if(p==s && r!=1) cs<<"No\n";
        else cs<<"Yes\n";      
    }
    return 0;
}
