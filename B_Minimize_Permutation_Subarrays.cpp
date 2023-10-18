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
        int arr[n];
        forn cin>>arr[i];
        if(arr[0]==n&& arr[1]!=1) cout<<arr[1]<<" "<<1<<endl;
        else if(arr[0]==n&& arr[1]==1) cout<<1<<" "<<1<<endl;
        else if(arr[0]==1&& arr[1]!=n) cout<<n<<" "<<arr[1]<<endl;   
        else if(arr[0]==1&& arr[1]==n) cout<<1<<" "<<1<<endl;
        else  cout<<arr[0]<<" "<<n<<endl;    
    }
    return 0;
}
