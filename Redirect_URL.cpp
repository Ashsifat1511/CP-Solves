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
    for(int tc=1;tc<=t;tc++)
    {
        string s;cin>>s;
        string s1="";
        if(s[4]=='s') cout<<"Case "<<tc<<": "<<s<<endl;
        else{
            for(int i=0;i<4;i++) s1+=s[i];
            s1.push_back('s');
            for(int i=4;i<s.size();i++) s1+=s[i];
            cout<<"Case "<<tc<<": "<<s1<<endl;
        }
    }
    return 0;
}