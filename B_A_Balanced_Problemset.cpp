#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

vector<int> getDivisors(int number) {
    vector<int> divisors;

    for (int i = 1; i*i <= number; ++i){
        if (number % i == 0) {
            divisors.push_back(i);
            if(i*i!=number) divisors.push_back(number/i);
        }
    }
    return divisors;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int x,n;cin >> x >> n;
        if(n==1) cout<<x<<endl;
        else if(n==x) cout<<1<<endl;
        else{
            if(x&1){
                if(x/n==1) cout<<2<<endl;
                else{
                    cout<<x/n<<endl;
                }
            }
            else{
                if(x/n==1) cout<<2<<endl;
                else{
                    cout<<x/n<<endl;
                }
            }
        }
    }
    return 0;
}
