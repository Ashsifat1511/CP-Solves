#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;
vector<pair<int,int>> m;
#define pb push_back

#define cs cout<<"Case "<<tc<<": "
bool isPrime(int n);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    vector<int> prime;
    for(int i=2;i<=100;i++){
        if(isPrime(i)) prime.pb(i);
    }
    sort(all(prime));
    for(int tc=1;tc<=t;tc++)
    {
        int n;cin>>n;
        int j=0;
        for(int i=0;i<prime.size();i++){
            if(n%prime[i]==0){
                while(n%prime[i]==0){
                    m[j].first=i;
                    m[j].second++;
                    n/=prime[i];
                }
                j++;
            }
            if(n==1) break;
        }
        cs<<n<<"= ";
        for(int i=0;i<m.size();i++){
            if(i== m.size()-1) cout<<m[i].first<<"("<<m[i].second<<")\n";
            else cout<<m[i].first<<"("<<m[i].second<<")*";
        }
    }
    return 0;
}

bool isPrime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0) return false;
    return true;
}
