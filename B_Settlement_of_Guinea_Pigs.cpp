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
        int n,cage=0,temp=0,flag=0; cin>>n;
        vector<int> v(n);
        forn cin>>v[i];
        forn{
            if(v[i]==1){
                if(temp>0) temp--;
                else cage++;
                flag++;
            }
            else temp=cage-(flag+2)/2;
        }
        cout<<cage<<endl;
    }
    return 0;
}
