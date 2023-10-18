#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
void solve();
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++) solve();
    return 0;
}

void solve()
{
    int n, m, x1, y1, x2, y2;
    string d_string;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;
    x1--;x2--;y1--;y2--;
    cin >> d_string;
    int d = (d_string[0] == 'U' ? 1+(d_string[1] == 'R' ? 2 : 0) : 0+(d_string[1] == 'R' ? 2 : 0));
    bool vis[n][m][4];
    memset(vis, false, sizeof(vis));
    int i = x1, j = y1;
    int bounces = 0;
    while(!vis[i][j][d])
    {
        if(i == x2 && j == y2){cout << bounces << endl; return;}
        int na = 0;
        if(d%2 == 1 && i == 0){d-=1;na++;}
        if(d%2 == 0 && i == n-1){d+=1;na++;}
        if(d >= 2 && j == m-1){d-=2;na++;}
        if(d < 2 && j == 0){d+=2;na++;}
        bounces+=min(1, na);
        if(vis[i][j][d])
        {
            break;
        }
        vis[i][j][d] = true;
        if(d%2 == 1){i--;}else{i++;}
        if(d >= 2){j++;}else{j--;}
    }
    cout << -1 << endl;
}