#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1>x2) cout<<0<<endl;
        else if((y1==0&&y2!=0)||(y1==0&&y2==0)){
            if(x1>x2) cout<<0<<endl;
            else cout<<-1<<endl;
        }
        else if(y1!=0&&y2==0){
            cout<<((x2-x1)/y1)+1<<endl;
        }
        else if(y1!=0&&y2!=0){
            if((y1==y2)||(y1<y2)) cout<<-1<<endl;
            else cout<<((x2-x1)/(y1-y2))+1<<endl;
        }
    }
    return 0;
}
