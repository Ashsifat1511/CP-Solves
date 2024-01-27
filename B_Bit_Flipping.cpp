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
        int n,k;cin>>n>>k;
        string s;cin>>s;
        vector<int> f(n,0);
        int tmpk=k;
        for(int i=0;i<n && tmpk>0;i++){
            if(k%2==s[i]-'0'){
                f[i]=1;
                tmpk--;
            }
        }
        f[n-1]+=tmpk;
        for(int i=0;i<n;i++){
            if((k-f[i])%2==1)   s[i]='1'-(s[i]-'0');
        }
        cout<<s<<endl;
        for(auto& e:f)  cout<<e<<" ";
        cout<<endl;
    }
    return 0;
}
