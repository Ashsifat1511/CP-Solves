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
        int n;
        cin >> n;
        if (n == 1) {
            cout <<1<<endl;
            continue;
        }
        if (n % 2==1) cout <<-1<<endl;
        else {
            for (int i = 0; i < n; ++i) {
                if (i % 2)cout << i << " ";
                else cout << n - i << " ";
            }
            cout <<endl;
        }
    }
    return 0;
}
