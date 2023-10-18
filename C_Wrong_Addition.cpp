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
        ll a,s,ans=0,zero=1,flag=1;cin>>a>>s;
        while(s||a){
            int sx=s%10, ax=a%10;
            a/=10;s/=10;
            if(sx<ax){
                sx+=10*(s%10);
                s/=10;
            }
            int c = sx-ax;
            if(c>9||c<0){
                flag=0;break;
            }
            ans+=zero*c;zero*=10;
        }
        cout<<(flag?ans:-1)<<endl;
    }
    return 0;
}