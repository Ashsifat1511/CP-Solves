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
        int n;cin>>n;
        int a[n];
        int flag=0;
        forn{
            cin>>a[i];
            if(!a[i]) flag=1;
        }
        int temp=0,max=0,cnt=0;
        while(temp<n){
            if(!a[temp]){
                cnt=0;
                while(temp<n&&!a[temp]){
                    cnt++;
                    temp++;
                }
            }
            else temp++;
            if(cnt>max)max=cnt;
        }
        if(flag==0)cout<<0<<endl;
        else cout<<max<<endl;
    }
    return 0;
}
