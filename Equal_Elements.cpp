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
        int n,mov=0,flag=0;cin>>n;
        vector<int> v;
        forn{
            int x;cin>>x;v.push_back(x);
        }
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[v[i]]++;
        }
        for(auto i:m) flag = max(flag,i.second);
        cout<<(flag==0?n-1:n-flag)<<endl;
    }
    return 0;
}