#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define cs cout<<"Case "<<tc<<": "
ll numbers(int n);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        ll a,b;
        cin>>a>>b;
        cs<<numbers(b)-numbers(a-1)<<endl;        
    }
    return 0;
}

ll numbers(int n){
  if(n == 0) return 0;  
  int subs;
  if(n % 3 == 0) subs = n / 3;
  else subs = (n / 3) + 1;
  return n - subs;
}