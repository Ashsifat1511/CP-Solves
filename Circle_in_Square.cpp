#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    double pi = 2* acos(0.0);
    for(int tc=1;tc<=t;tc++)
    {
        double r;cin>>r;
        double result = (((2*r)*(2*r))-(pi*r*r));
        printf("Case %d: %.2lf\n",tc,result);
    }
    return 0;
}
