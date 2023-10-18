#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0)

string a , b , c = "";
const int N = 3003 ;
int dp[N][N] ;

int lcs(int m , int n) {
    if (m < 0 or n < 0) return 0;
    if(dp[m][n] != -1) return dp[m][n] ;
    int ans = lcs(m-1 , n) ;
    ans = max(ans , lcs(m , n-1)) ;
    if(a[m] == b[n]) ans = max(ans , lcs(m-1 , n-1)+1) ;
    return dp[m][n] = ans ;
}

void lcsp(int m , int n){
    if (m < 0 or n < 0) return ;
    if(a[m] == b[n]){
        c += a[m] ;
        lcsp(m-1 , n-1) ;
        return ;
    }
    int x = lcs(m-1 , n);
    int y = lcs(m , n-1) ;
    if(x >= y) lcsp(m-1 , n);
    else lcsp(m , n-1) ;
}

int main(){
    fast ;
    cin >> a >> b ;
    memset(dp , -1 , sizeof dp);
    lcsp(a.length()-1,b.length()-1) ;
    reverse(c.begin() , c.end()) ;
    cout << c ;
}