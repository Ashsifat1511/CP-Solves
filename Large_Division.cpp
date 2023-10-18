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
        string a;
        int b;
        cin >> a >> b;
        int j = 0;
        if (a[0] == '-') j = 1;
        if (b < 0) b = abs(b);
        long rim = 0;
        for ( ; j < a.size(); j++)
        {
            rim = rim*10 + (a[j] - '0');
            rim %= b;
        }
        if (rim == 0) cs<< "divisible\n";
        else cs<< "not divisible\n";;       
    }
    return 0;
}
