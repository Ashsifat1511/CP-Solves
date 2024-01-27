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
        int num[3];cin>>num[0]>>num[1]>>num[2];
        sort(num,num+3);
        if(num[0]==num[1]) cout<<num[2]<<endl;
        else cout<<num[0]<<endl;
    }
    return 0;
}
