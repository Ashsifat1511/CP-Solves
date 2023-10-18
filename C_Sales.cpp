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
    //cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n,k;cin>>n>>k;
        float pf[n+1]={0};
        for(int i=1;i<=n;i++){
            float x;cin>>x;
            pf[i]=pf[i-1]+x;
        }
        float minimum=INT_MAX,maximum=-1,mini,maxi;
        if(n==k) cout<<1<<" "<<1<<endl;
        else{
            for(int i=0;i+k<=n;i++){
                float temp=(pf[i+k]-pf[i])/k;
                if(temp<minimum){
                    minimum=temp;
                    mini=i;
                }
                if(temp>maximum){
                    maximum=temp;
                    maxi=i;
                }
            }
            cout<<mini+1<<" "<<maxi+1<<endl;
        }
    }
    return 0;
}

