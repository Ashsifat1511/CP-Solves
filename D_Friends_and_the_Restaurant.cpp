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
        vector<int> x(n), y(n);
        vector<pair<int,int>> dif(n);
        for(int i = 0; i < n; i++){
            cin >> x[i];
        }
        for(int i = 0; i < n; i++){
            cin >> y[i];
        }
        for(int i = 0; i < n; i++){
            dif[i].first = y[i] - x[i];
            dif[i].second = i;
        }
        sort(dif.begin(), dif.end(), greater<>());

        int j = n-1, ct = 0;
        for(int i = 0; i < n; i++){
            while(j > i && dif[j].first+dif[i].first < 0){
                j--;
            }
            if(j<=i){
                break;
            }
            ct++;j--;
        }
        cout << ct << endl;
    }
    return 0;
}
