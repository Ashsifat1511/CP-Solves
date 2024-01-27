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
        int n,m;cin>>n>>m;
        if(((n % 2 == 0) && (m % 2 == 1)) || (m <n)) cout << "NO\n";
	    else if((n % 2) == 1){ 
		    cout << "YES\n";
		    for(int i = 1; i < n; ++i){
			    cout << "1 ";
		    }
		    cout << m-n + 1 << endl;
	    }
        else{ 
		    cout << "YES\n";
		    for(int i = 2; i < n; ++i){
			    cout << "1 ";
		    }
		    cout << (m-n + 2) / 2 << ' ' << (m-n + 2) / 2 << endl;
	    }
    }
    return 0;
}
