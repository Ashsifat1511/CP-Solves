#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;
int binExp(int a,int b,int mod);
int main(){
    int a,b,m;cin>>a>>b>>m;
    cout<<binExp(a,b,m)<<endl;
    return 0;
}

int binExp(int a,int b,int mod)
{
    int ans=1;
    while(b){
        if(b&1) ans=(ans*1LL*a)%mod;
        a= (a*1LL*a)%mod;
        b>>=1;
    }
    return ans;
}
