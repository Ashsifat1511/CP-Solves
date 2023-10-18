#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;
int N= 1e9+10;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0;i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());

        if(n == 2){
            cout << v[0] << " " << v[1] << endl;
            continue;
        }

        ll pos = -1, mn = 200000000000;

        for (int i = 1;i < n; i++){
            if(mn > abs(v[i] - v[i - 1])){
                pos = i;
                mn = abs(v[i] - v[i - 1]);
            }
        }

        for (int i = pos;i < n; i++){
            cout << v[i] << " ";
        }
        for(int i = 0;i < pos; i++){
            cout << v[i] << " ";
        }

        cout << endl;
    }
    return 0;
}
