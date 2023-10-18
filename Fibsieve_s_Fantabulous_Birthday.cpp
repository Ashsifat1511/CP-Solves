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
        ll n;cin>>n;
        ll temp,flag,r,c;
        flag = ceil(sqrt(n*1.0));
        temp = flag*flag-n;
        if(flag>temp){
            r = flag;c=temp+1;
        }
        else{
            c= flag;
            r= n-(flag-1)*(flag-1);
        }
        if(flag&1) swap(r,c);
        cs<<r<<" "<<c<<endl;    
    }
    return 0;
}
