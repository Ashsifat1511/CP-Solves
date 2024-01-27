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
        int x;cin>>x;
        if(x==1) cout<<3<<endl;
        else if(x&1) cout<<1<<endl;
        else{
            int ans=1;
            while(x % 2 == 0){
                x /= 2; 
                ans *= 2;
            }
            cout<<ans+(x==1)<<endl;
        }
    }
    return 0;
}
