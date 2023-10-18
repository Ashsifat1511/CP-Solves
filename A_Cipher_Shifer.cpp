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
        int n;cin >> n;
        string s;cin >> s;
        int i=0;
        string a="";
        for (int j=1;j<s.size();){
            if (s[i]==s[j]){
                a.push_back(s[j]);
                i = j+1;
                j+=2;
            }
            else j++;
        }
        cout << a << endl;
    }
    return 0;
}
