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
        string s;cin>>s;
        s='0'+s;
        int p=s.size();
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]>='5')s[i-1]++,p=i;
        }
        for(int i=(s[0]=='0');i<s.size();i++)
        {
            cout<<(i>=p?'0':s[i]);
        }
        cout<<endl;
    }
    return 0;
}
