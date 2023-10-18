#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n>=10) cout<<n-10<<" "<<10<<endl;
        else cout<<0<<" "<<n<<endl;
    }
    return 0;
}