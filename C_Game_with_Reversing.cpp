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
         int n;cin>>n;
        string a, b;
        cin>>a>>b;
        int aa=0, bb=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i]) aa++;
            if(a[i]!=b[n-i-1]) bb++;
        }
        int anss;
        if(bb<2) anss=2;
        else if(bb==2) anss=3;
        else if(bb%2) anss=((bb-1)/2)*4+2;
        else anss=((bb-2)/2)*4+2+1;
        int ans=(aa/2)*4+aa%2;
        cout<<min(ans,anss)<<endl;
    }
    return 0;
}
