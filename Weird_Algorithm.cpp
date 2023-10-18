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
    //cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        ll n;cin>>n;
        cout<<n<<" ";
        while(1){
            if(n%2==0){
                n/=2;
                cout<<n<<" ";
            }
            else if(n%2!=0&&n!=1){
                n= 3*n+1;
                cout<<n<<" ";
            }
            else if(n==1) break;
        }        
    }
    return 0;
}
