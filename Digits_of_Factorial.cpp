#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1000001;
const int M = 1e9;

typedef  long long int ll;
double fact[N];
#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    fact[0]=0; 
    ll digit;
    for(int i=1;i<=(N-1);i++) {
        fact[i]=fact[i-1]+log(i);
    }
    for(int tc=1;tc<=t;tc++)
    {
        int n,b;cin>>n>>b;
        digit= fact[n]/log(b)+1;
        cs<<digit<<endl;
    }
    return 0;
}

