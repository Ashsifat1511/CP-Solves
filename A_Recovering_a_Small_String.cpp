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
        if(n<=28){
            string ans="";	
        ans+='a';
        ans+='a';
        int last = n-2;
        ans+='last'+'a';
        cout<<ans<<endl;
        }
        else if(n>28&&n<=56){
            string ans="";
            ans+=('n-26')
    }
    return 0;
}
