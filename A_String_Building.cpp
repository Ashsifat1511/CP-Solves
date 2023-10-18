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
        string s;
        cin>>s;
        bool  ans = 1;
        for(int i=0; i<s.size(); i++)
        {
            int c = 1;
            while(s[i]==s[i+1] && i+1<s.size())
            {
                c++;
                i++;
            }
            if(c<2)
            {
                ans = 0;
                break;
            }
        }
        if(ans)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
