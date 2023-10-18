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
        int ox, oy, ax, ay, bx, by;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        double OA,OB,AB,angle;
        OA = sqrt(pow(ax - ox, 2) + pow(ay - oy, 2));
        OB = sqrt(pow(bx - ox, 2) + pow(by - oy, 2));
        AB = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
        angle = acos((pow(OA, 2) + pow(OB, 2) - pow(AB, 2)) / (2 * OA * OB));
        printf("Case %d: %.6lf\n", tc, OA * angle);        
    }
    return 0;
}
