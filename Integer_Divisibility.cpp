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
        int n,d;cin>>n>>d;
        int rem=0,cnt=0;
        while (1){
            rem = (rem *10 + d)%n ;
            cnt++ ;
            if (rem == 0) break ;
        }
        cs<<cnt<<endl;
    }
    return 0;
}
