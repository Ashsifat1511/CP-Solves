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
        double v1,v2,v3,a1,a2,bird,t1,t2,t3,trains;
        cin>>v1>>v2>>v3>>a1>>a2;
        t1 = v1/a1;
        t2 = v2/a2;
        t3 = t1;
        if(t1 < t2)
            t3 = t2;
        bird = v3 * t3;
        trains = v1 * t1 - .5 * a1 * t1 * t1;
        trains += v2 * t2 - .5 * a2 * t2 * t2;
        printf("Case %d: %.10lf %.10lf\n", tc, trains, bird);       
    }
    return 0;
}
