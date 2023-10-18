#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,dif,b;
        cin>>a>>b;
        a=abs(a);
        b=abs(b);
        dif=min(a,b);
        a-=dif;
        b-=dif;
        if(!a&&b)cout<<dif*2+(b-1)*2+1<<endl;
        else if(a&&!b)cout<<dif*2+(a-1)*2+1<<endl;
        else cout<<dif*2<<endl;
        
    }
    return 0;
}