#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define endl "\n"
#define tab "\t"
#define in long long
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
const in modv = 1e9 + 7;
const double pi = 3.141592653589793238;
using namespace std;
 
in t = 1, n, x, y, m, tc = 1, k;
vector<in> a, b, c;
map<char, in> mp;
set<in> st;
string s,s2,s3,s4;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    cin>>t;
 
    while(t--)
    {
        cin>>n>>k>>m>>s;
        for(int i=0;i<m;++i)
        {
            if(k>(in)s[i]-97) s2.push_back(s[i]);
        }
 
        if(s2=="")
        {
            cout<<"NO"<<endl;
            for(int i=0;i<n;++i) cout<<'a';
            cout<<endl;
            continue;
        }
 
        s3="";
        x=0;
        for(int i=0;i<s2.size();++i)
        {
            ++mp[s2[i]];
            if(mp.size()==k) s3.push_back(s2[i]), ++x, mp.clear();
        }
 
        if(x>=n) cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
            if(mp.empty())
            {
                while(s3.size()<n) s3.push_back(s2.back());
                cout<<s3<<endl;
            }
            else
            {
                char c;
                for(char ch='a';ch<k+97;++ch)
                {
                    if(!mp[ch])
                    {
                        c=ch; break;
                    }
                }
 
                while(s3.size()<n) s3.push_back(c);
                cout<<s3<<endl;
            }
        }
 
        mp.clear(), s2.clear(), s3.clear();
    }
 
    return 0;
}