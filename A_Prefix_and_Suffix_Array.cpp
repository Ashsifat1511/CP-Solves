#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin >> n;
    vector <string> v;
    for (int i=0;i<2*n-2;i++){
      string s;
      cin >> s;
      if (s.size()==n-1){
        v.push_back(s);
      }
    }
    reverse(v[0].begin(),v[0].end());
    (v[0]==v[1])? cout <<"YES" << endl:cout <<"NO"<< endl;
  }  
    return 0;
}