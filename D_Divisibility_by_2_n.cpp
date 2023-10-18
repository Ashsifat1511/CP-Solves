#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;
void solve();
int getDivisor(int);
typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++) solve();
    return 0;
}
void solve(){
    int n;
        cin>>n;
        long long x=0,extra=0;
        vector<int>a(n),b;
        for(int i=0;i<n;i++){
            cin>>a[i];
            x+= getDivisor(a[i]);
            int cnt = getDivisor(i+1);
            extra += cnt;
            b.push_back(cnt);
        }
        if(x>=n){
            cout<<0<<endl;
            return;
        }
        if(x+extra < n){
            cout<<-1<<endl;
            return;
        }
        int ans=0;
        sort(b.rbegin(),b.rend());
        for(auto i : b){
            ans++;
            if(x+i>=n) break;
            x+=i;
        }
        cout<<ans<<endl;
}

int getDivisor(int x){
        int total=0;
        while(x%2==0){
            x/=2;
            total++;
        }
        return total;
    }