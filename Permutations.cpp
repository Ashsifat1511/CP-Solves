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
        int n;cin>>n;
        string s="";
        if(n<=3 && n>1) {
            cout<<"NO SOLUTION\n";
            break;
        }
        for(int i=1;i<=n;i++){
                if(i%2==0) cout<<i<<" ";
                else s+=to_string(i)+" ";
            }
        cout<<s;             
    }
    return 0;
}
