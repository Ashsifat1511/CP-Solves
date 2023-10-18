#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int m,n;cin>>m>>n;
        if(m==1||n==1) cs<<max(m,n)<<endl;
        else if(m==2||m==2) cs<<((m*n)/8)*4 + (((m*n)%8)>=4?4:(m*n)%8)<<endl;
        else cs<<(n*m+1)/2<<endl;     
    }
    return 0;
}
