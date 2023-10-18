#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

int sumofDigits(int n)
{
    int cnt=0;
    while(n!=0){
        cnt+=n%10;n/=10;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n,a,b;cin>>n>>a>>b;
        ll sum=0;
        for(int i=1;i<=n;i++){
            if(sumofDigits(i)>=a&&sumofDigits(i)<=b) sum+=i;
        } 
        cout<<sum<<endl;       
    }
    return 0;
}
