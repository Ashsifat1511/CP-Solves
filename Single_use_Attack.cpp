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
        int h,x,y,ans=1;
        cin>>h>>x>>y;
        h-=y;
        if(h<=0) cout<<ans<<endl;
        else{
            while(1){
                h-=x;
                ans++;
                if(h<=0) break;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}