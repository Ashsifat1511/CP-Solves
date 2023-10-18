#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n, cnt;
        cin>>n;
        vector<int> vec = {2};    
        cnt = 0;
        for(int i=1; i<=n; i++) {
            int x;
            cin>>x;
            vec.push_back(x);
        }
        for(int i=1; i<vec.size(); i++) cnt += (vec[i]-vec[i-1]+4)/5;    
        cs<<cnt<<endl;
    }
    return 0;
}

