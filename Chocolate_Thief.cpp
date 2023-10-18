#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back
#define INF 1e9

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n;cin>>n;
        vector<pair<string,int>> v(n);
        for(int i=0;i<n;i++){
            string s;int a,b,c;
            cin>>s>>a>>b>>c;
            v[i].first=s;
            v[i].second =a*b*c;
        }
        int lo=INF,hi=0,flag=0;
        string up,down;
        for(int i=1;i<n;i++){
            if(v[i-1].second==v[i].second) continue;
            else{
                if(v[i-1].second<v[i].second){
                    if(v[i-1].second<lo){
                        lo=v[i-1].second;
                        down= v[i-1].first;
                    }
                    if(v[i].second>hi){
                        hi = v[i].second;
                        up = v[i].first;
                    }
                }
                else{
                    if(v[i-1].second>hi){
                        hi=v[i-1].second;
                        up= v[i-1].first;
                    } 
                    if(v[i].second<lo){
                        lo = v[i].second;
                        down = v[i].first;
                    }                   
                }
                flag++;
            }
        }
        if(flag==0) cs<<"no thief\n";
        else cs<<up<<" took chocolate from "<<down<<endl;
    }
    return 0;
}
