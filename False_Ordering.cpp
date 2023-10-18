#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1001;

vector<pair<int,int>> v(N);

typedef  long long int ll;

#define cs cout<<"Case "<<tc<<": "
int numberofDivisor(int n);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int i=1;i<N;i++){
        v[i].first = numberofDivisor(i);
        v[i].second = i;
    }
    sort(v.begin(), v.end(), [](const pair<int, int> &a,
                                   const pair<int, int> &b) {
    if (a.first < b.first) {
      return true;
    }
    if (a.first > b.first) {
      return false;
    }
    return a.second > b.second;
  });
    for(int tc=1;tc<=t;tc++)
    {
        int n;cin>>n;
        cs<<v[n].second<<endl;
    }
    return 0;
}

int numberofDivisor(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n) cnt+=1;
            else cnt+=2;
        }
        else continue;
    }
    return cnt;
}
