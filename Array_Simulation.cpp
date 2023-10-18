#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n,m;cin>>n>>m;
        vector<int> arr(n);
        forn cin>>arr[i];
        while(m--){
            char c;cin>>c;
            if(c=='S'){
                int d;cin>>d;
                forn arr[i]+=d;
            }
            else if(c=='M'){
                int d;cin>>d;
                forn arr[i]*=d;
            }
            else if(c=='D'){
                int d;cin>>d;
                forn arr[i]/=d;
            }
            else if(c=='P'){
                int x,y;cin>>x>>y;
                swap(arr[x],arr[y]);
            }
            else if(c=='R'){
                reverse(arr.begin(),arr.end());
            }
        }
        cs<<endl;
        forn cout<<arr[i]<<" ";
        cout<<endl;        
    }
    return 0;
}
