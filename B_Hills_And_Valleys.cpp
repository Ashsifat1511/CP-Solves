#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)
int isValley(int i);
int isHill(int i);
const int N = 3e5+10;
int a[N], n;
typedef  long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        int is[n] = {};
        int s = 0;
        for (int i = 1; i < n - 1; i++) {
            if (isHill(i) || isValley(i)) is[i] = 1, s++;
        }
        int ans = s;
        for (int i = 1; i < n - 1; i++) {
            int temp = a[i];
            a[i] = a[i - 1];
            ans = min(ans, s - is[i - 1] - is[i] - is[i + 1] + isHill(i - 1) + isValley(i - 1) + isHill(i) + isValley(i) + isHill(i + 1) + isValley(i + 1));
            a[i] = a[i + 1];
            ans = min(ans, s - is[i - 1] - is[i] - is[i + 1] + isHill(i - 1) + isValley(i - 1) + isHill(i) + isValley(i) + isHill(i + 1) + isValley(i + 1));
            a[i] = temp;
    }
    cout << ans << endl;
    }
    return 0;
}

int isValley(int i) {
    return (i > 0 && i < n - 1 && a[i] < a[i - 1] && a[i] < a[i + 1]);
}

int isHill(int i) {
    return (i > 0 && i < n - 1 && a[i] > a[i - 1] && a[i] > a[i + 1]);
}
