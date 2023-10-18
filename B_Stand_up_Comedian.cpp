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
        ll a1,a2,a3,a4,duration=0;
            cin>>a1>>a2>>a3>>a4;
            if(a1 == 0) {
                cout<<1;
            }
            else {
                cout<<a1+2*min(a2,a3)+min(a1+1,abs(a2-a3)+a4);
            }
            cout<<endl;
    }
    return 0;
}