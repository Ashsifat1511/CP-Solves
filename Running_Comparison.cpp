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
        int n,happy(0);
        cin>>n;
        vector<float> a(n),b(n);
        forn cin>>a[i];
        forn cin>>b[i];
        forn{
            if(b[i]>=(a[i]/2)&&b[i]<=(2*a[i])) happy++;
            else continue;
        }
        cout<<happy<<endl;
    }
    return 0;
}