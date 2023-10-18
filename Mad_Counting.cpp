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
        map <int,int>mp ;
        long long int x, n, ans = 0 ;
        cin >>n ;
        for (int i = 0 ; i<n ; i++) {
            cin >> x ;
            mp[x]++ ;
        }
        for (auto i : mp)ans+= ( ( i.second / (i.first+1) )  + (  i.second % (i.first+1)  !=0 ?  1 : 0) ) * (i.first+1) ;
        cs<< ans <<endl ;
    }
    return 0;
}
