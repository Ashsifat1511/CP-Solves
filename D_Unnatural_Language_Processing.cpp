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
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<char>v;
    
        for(int i=0;i<n-2;i++){
            v.push_back(s[i]);
            if((s[i]=='a' or s[i] == 'e')){
                v.push_back('.');
            
                if(s[i+1] != 'a' && s[i+2] != 'a' && s[i+1] != 'e' && s[i+2] !='e'){
 
                    v.pop_back();
                    v.push_back(s[i+1]);
                    i++;
                    v.push_back('.');
                
                }
 
            }
        }
        v.push_back(s[n-2]);
        v.push_back(s[n-1]);
        for(auto it : v) cout<<it;
        cout<<endl;
    }
    return 0;
}
