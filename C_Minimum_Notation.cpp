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
         string s; cin >> s;
        int n = s.size();
        char minI = '9';
        for(int i = n-1; i >= 0; i--){
            if(s[i] <= minI){
                minI = s[i];
            }else{
                s[i] = min((char)(s[i] + 1), (char)'9');
            }
        }
        sort(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
