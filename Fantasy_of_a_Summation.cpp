#include<bits/stdc++.h>
using namespace std;
#define int long long int
int modular_exponentiation(int b, int p,int mod)
{
    int r = 1;
    while(p)
    {
        if(p&1)
            r = (r*b)%mod;
        b = (b*b)%mod;
        p >>= 1;
    }
    return r;
}
main()
{
    int t;
    cin>>t;
    for(int j=1; j<=t; j++)
    {
        int n,k,mod;
        cin>>n>>k>>mod;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            sum+=x;
            sum=(sum+mod)%mod;
        }
        sum=(sum*(k%mod))%mod;
        sum=sum*modular_exponentiation(n,k-1,mod);
        cout<<"Case "<<j<<": "<<(sum+mod)%mod<<endl;
    }
}