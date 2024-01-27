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
        int n,k,m;string s;cin >> n >> k >> m>>s;
        set<char> st;
        for(int i=0;i<m;i++){
            st.insert(s[i]);
        }
        if(st.size()<k){
            cout<<"NO\n";
            string hoini="";
            for(int i=0;i<k;i++){
                hoini+=('a'+i);
            }
            cout<<hoini<<endl;
        }
        else{
            unordered_map<char,int> mp;
            for(int i=0;i<s.size();i++){
                mp[s[i]]++;
            }
            int flag=0;char ans;
            for(auto x:mp){
                if(x.second!=n){
                    flag=1;
                    ans=x.first;
                    break;
                }
            }
            if(flag==0) cout<<"YES\n";
            else{
                cout<<"NO\n";
                string s1="";
                for(int i=0;i<n;i++){
                    s1+=ans;
                }
                cout<<s1<<endl;
            }
        }
    }
    return 0;
}
