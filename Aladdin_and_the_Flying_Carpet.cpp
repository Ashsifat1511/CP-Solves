#include<bits/stdc++.h>
using namespace std;

vector<long long int> prime;
const int nx = 1e6 + 10;
void generate_prime()
{
    bool flag[nx]={};
    int rt = 1e3;
    for(int i=3; i<rt; i+=2)
    {
        if(!flag[i])
        {
            for(int j=i*i; j<nx; j+=(i<<1))
            {
                flag[j] = true;
            }
        }
    }

    prime.push_back(2);
    for(int i=3; i<nx; i+=2)
    {
        if(!flag[i]) prime.push_back(i);
    }
}

long long int divisors(long long int n)
{
    long long int ans=1,siz;
    siz = prime.size();

    for(long long int i=0;i<siz && (prime[i]*prime[i])<=n ;i++)
    {

        long long int power = 0;
        if(n%prime[i]==0)
        {
           while(n%prime[i]==0)
            {
                ++power;
                n/=prime[i];
            }
        }
        ans *=(power+1);
    }
    if(n!=1) ans<<=1;
    return ans;
}

int main()
{
    int t,cas=0;
    cin>>t;

    generate_prime();

    long long int siz = prime.size();

    while(t--)
    {
        long long int n,a,b,ans,rt;
        cin>>a>>b;

        rt = sqrt(a);

        if((b*b==a)||rt<b)
        {
            cout<<"Case "<<++cas<<": "<<0<<'\n';
            continue;
        }

        ans = divisors(a);

        ans = ans/2;

        for(long long int i=1;i<b;i++)
        {
            if(a%i==0) --ans;
        }

        cout<<"Case "<<++cas<<": "<<ans<<'\n';
    }

    return 0;
}
