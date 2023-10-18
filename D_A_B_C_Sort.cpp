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
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        if(n == 1){
            cout << "YES" << endl;
            continue;
        }
        int er;
        if(n%2 == 1){
            er = a[0];
            a.erase(a.begin());
        }

        for(int i = 1; i < a.size(); i+=2){
            if(a[i] < a[i-1]){
                int temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
            }
        }
        string ans = "YES";
        if(n%2 == 1){
            a.insert(a.begin(), er);
        }
        for(int i = 1; i < a.size(); i++){
            if(a[i] < a[i-1]){
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
