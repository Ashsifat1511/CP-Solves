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
        ll n,m,h;cin>>n>>m>>h;
        int pos=1;
        pair<ll,ll> p={0,0};
        for(int i=0;i<n;i++){
            vector<ll> v(m);
            for(int j=0;j<m;j++){
                cin>>v[j];
            }
            sort(v.begin(),v.end());
            ll point=0,pen=0,temp=0;
            for(int j=0;j<m;j++){
                if(temp+v[j]>h) break;
                temp+=v[j];
                point++;
                pen+=temp;
            }
            if(i){
                if(make_pair(point,pen)>p) pos++;
            }
            else p= make_pair(point,pen);
        }
        cout<<pos<<endl;
    }
    return 0;
}
