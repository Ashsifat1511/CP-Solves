#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define cs cout<<"Case "<<tc<<": "

//ll square[40001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    //for(int i=1;i<=4000;i++) square[i]=i*i;
    for(int tc=1;tc<=t;tc++)
    {
        int mat[3];cin>>mat[0]>>mat[1]>>mat[2];
        sort(mat,mat+3);
        ll oti = mat[2]*mat[2];
        ll other = mat[1]*mat[1]+mat[0]*mat[0];
        if(oti==other) cs<<"yes\n";
        else cs<<"no\n";        
    }
    return 0;
}
