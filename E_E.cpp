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
    int t;cin>>t;
    while(t--){
        int n,l;cin>>l>>n;
        int dist[n];
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x>l/2) dist[i]=l-x;
            else dist[i]=x;
        }
        sort(dist,dist+n);
        cout<<dist[n-1]<<" "<<l-dist[0]<<endl;
    }
    return 0;
}
