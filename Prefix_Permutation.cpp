#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n&1) cout<<-1<<endl;
        else{
            for(int i=1;i<n+1;i+=2) cout<<i+1<<" "<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}