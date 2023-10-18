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
        int r1, c1, r2, c2;
        cin>>r1>>c1>>r2>>c2;
        int c= abs(c1-c2);
        int r = abs(r1-r2);
        if(r==c) cs<<1<<endl;
        else{
            if(r%2==c%2) cs<<2<<endl;
            else cs<<"impossible\n";
        }        
    }
    return 0;
}
