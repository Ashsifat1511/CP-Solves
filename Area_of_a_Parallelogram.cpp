#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int ax,bx,cx,dx,ay,by,cy,dy;cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx=ax+cx-bx;dy=ay+cy-by;
        int area = ax*by+bx*cy+cx*dy+dx*ay-ax*dy-dx*cy-cx*by-bx*ay;
        area = abs(area);
        area/=2;
        cs<<dx<<" "<<dy<<" "<<area<<endl;        
    }
    return 0;
}
