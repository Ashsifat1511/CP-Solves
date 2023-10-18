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
        int n;
        cin>>n;
        vector<int>v(n);
        forn{
        cin>>v[i];
        if(v[i]==1) v[i]++;
    }
    for(int i=0;i<n-1;i++){
        if(v[i+1]%v[i]==0){
            v[i+1]++;
        }
    }
      forn cout<<v[i]<<" ";
      cout<<endl;
    }
    return 0;
}
