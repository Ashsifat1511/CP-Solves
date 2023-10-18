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
        string s,s1="codeforces";
        cin>>s;
        int cnt=0;
        for(int i=0;i<10;i++){
            if(s[i]!=s1[i]) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
