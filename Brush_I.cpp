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
        int n;cin>>n;
        ll sum=0;
        forn{
            int x;cin>>x;
            if(x<0) continue;
            sum+=x;
        }
        cs<<sum<<endl;        
    }
    return 0;
}
