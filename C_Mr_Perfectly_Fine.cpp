#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<pair<int,string>> v(n);
        map<string,vector<int>> m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first>>v[i].second;
            m[v[i].second].push_back(v[i].first);
        }
        
        if(m["10"].size() != 0) sort(m["10"].begin(),m["10"].end());
        if(m["01"].size() != 0) sort(m["01"].begin(),m["01"].end());
        if(m["11"].size() != 0) sort(m["11"].begin(),m["11"].end());
        
        int temp = ((m["10"].size() != 0) ? m["10"][0] : 0) + ((m["01"].size() != 0) ? m["01"][0] : 0 );
        int flag = (m["11"].size() != 0) ? m["11"][0] : 0;
        //cout << temp << endl ;
        cout<<min(temp,flag)<<endl;
    }
    return 0;
}