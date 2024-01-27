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
        int a,b,c,x,y,z,tmp;
        cin>>a>>b>>c;
        vector<int> v(3,0);
        x=a, y=b, z=c;
        tmp=min(y,z);
        y-=tmp;
        z-=tmp;
        x+=tmp;
        if(x>0 && max(y,z)%2==0) v[0]=1;
        x=a, y=b, z=c;
        tmp=min(x,z);
        x-=tmp;
        z-=tmp;
        y+=tmp;
        if(y>0 && max(x,z)%2==0) v[1]=1;
        x=a, y=b, z=c;
        tmp=min(x,y);
        x-=tmp;
        y-=tmp;
        z+=tmp;
        if(z>0 && max(x,y)%2==0) v[2]=1;
        for(auto ele:v) cout<<ele<<" ";
        cout<<endl;
    }
    return 0;
}
