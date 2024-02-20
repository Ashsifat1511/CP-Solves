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
        int n,k;cin>>n>>k;
        if(k==(4*n-2)) cout<<2*n<<endl;
        else if(k%2==1) cout<<k/2+1<<endl;
        else cout<<k/2<<endl;
    }
    return 0;
}
