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
        int n,x;cin>>n>>x;
        int arr[n+2];
        arr[0]=0;
        for(int i=1;i<n+1;i++) cin>>arr[i];
        arr[n+1]= arr[n]+ (x-arr[n])*2;
        int ans=0;
        for(int i=0;i<n+1;i++){
            if(abs(arr[i+1]-arr[i])>ans) ans =abs(arr[i+1]-arr[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
