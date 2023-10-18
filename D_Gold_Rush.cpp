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
        int n,m;cin>>n>>m;
        int g=__gcd(n,m);
        int nn=n/g;
        int mm=m/g;
        int x3=0;
        while(nn%3==0) nn/=3,x3++;
        if(nn!=1) {cout<<"NO"<<endl;continue;}
        int x2=0;
        while(mm%2==0) mm/=2,x2++;
        if(mm!=1) {cout<<"NO"<<endl;continue;}
        if(x2>x3) {cout<<"NO"<<endl;continue;}
        cout<<"YES"<<endl;    
    }
    return 0;
}