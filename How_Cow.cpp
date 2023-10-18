#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        cs<<endl;
        int m;cin>>m;
        while(m--){
            int a,b;cin>>a>>b;
            if(a<x1||a>x2||b<y1||b>y2) cout<<"No\n";
            else cout<<"Yes\n";
        }        
    }
    return 0;
}
