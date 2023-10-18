#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define forn for (int i = 0; i < n; i++)

const int N = 1e9 + 7;

typedef long long int ll;

#define pb push_back

#define cs cout << "Case " << tc << ": "

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    double res = 0;
    for(int i=1;i<=n;i++){
        if(k<i){
            res+=1.0/n;
            continue;
        }
        int move=0,temp=i;
        while(temp<k){
            temp*=2;move++;
        }
        double flag = pow(0.5,move)/n;
        res+=flag;
    }
    printf("%.20lf",res);
    return 0;
}
