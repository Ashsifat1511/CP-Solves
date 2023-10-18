#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
int isdivisible7(string s)
{
    int n = s.length(), gSum=0;
    if (n == 0)
        return 1;
    if (n % 3 == 1) {
        s="00" + s;
        n += 2;
    }
    else if (n % 3 == 2) {
        s= "0" + s;
        n++;
    }
    int i, GSum = 0, p = 1;
    for (i = n - 1; i >= 0; i--) {
        int temp = 0;
        temp += s[i--] - '0';
        temp += (s[i--] - '0') * 10;
        temp += (s[i] - '0') * 100;
        gSum = gSum + temp * p;
        p *= (-1);
    }
 
    return (gSum % 7 == 0);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;cin>>s;
    if(isdivisible7(s)) cout<<"YES\n";
    else cout<<"No\n";
    return 0;
}
