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
        char grid[3][3];
        int cnt[3]={0};
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                char x;
                cin>>x;
                grid[i][j]=x;
                if(x=='A') cnt[0]++;
                else if(x=='B') cnt[1]++;
                else if(x=='C') cnt[2]++;
            }
        }
        if(cnt[0]<3) cout<<"A\n";
        else if(cnt[1]<3) cout<<"B\n";
        else cout<<"C\n";
    }
    return 0;
}
