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
        int n,m,flag=0;
        cin>>n>>m;
        char arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            cin>>arr[i][j];}
        }
        string ans="vika";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[j][i]==ans[flag]){
                    flag++;
                    break;
                }
            }
        }
        if(flag==4)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
