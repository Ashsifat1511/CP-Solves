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
    string s1,s2;
    cin>>t;
    getline(cin, s1);
    for(int tc=1;tc<=t;tc++)
    {
        string s1,s2;
        getline(cin, s1);
        getline(cin, s2);
        transform(s1.begin(),s1.end(),s1.begin(),::tolower);
        transform(s2.begin(),s2.end(),s2.begin(),::tolower); 
        s1.erase(remove(s1.begin(),s1.end(),' '),s1.end());
        s2.erase(remove(s2.begin(),s2.end(),' '),s2.end());
        sort(all(s1));
        sort(all(s2));
        if(s1==s2) cs<<"Yes\n";
        else cs<<"No\n";       
    }
    return 0;
}
