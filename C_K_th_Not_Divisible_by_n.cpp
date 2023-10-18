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
    unordered_map<int,vector<string>> m;
    int n;
    cin>>n;
    while(n--){
        int num;string name;
        cin>>num>>name;
        m[num].push_back(name);
    }
    for(auto p:m){
        cout<<p.first<<" ";
        for(int i=0;i<p.second.size();i++) cout<<p.second[i]<<" ";
        cout<<endl;
    }
    return 0;
}
