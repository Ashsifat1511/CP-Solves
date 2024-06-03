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
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n;cin>>n;
        char arr[2*n][2*n];
        for(int i=0;i<2*n;i++){
            for(int j=0;j<2*n;j++){
                if(i%4==0 || i%4==1){
                    if(j%4==0 || j%4==1) arr[i][j]='#';
                    else arr[i][j]='.';
                }
                else{
                    if(j%4==0 || j%4==1) arr[i][j]='.';
                    else arr[i][j]='#';
                }
            }
        }
        for(int i=0;i<2*n;i++){
            for(int j=0;j<2*n;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
