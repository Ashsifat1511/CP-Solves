#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;
void solve();
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}

void solve(){
        int n;
        cin>>n;
        int a[n+1];
	    for(int i = 1;i <= n;i++) cin>>a[i];
	    if(a[1]){
		cout<<n+1<<" ";
		for(int i = 1;i <= n;i++) cout<<i<<" ";
		return;
	    }
	    for(int i = 1;i < n;i++){
		    if(!a[i] && a[i + 1]){
			for(int j = 1;j <= i;j++) cout<<j<<" ";
			printf("%d ", n + 1);
			for(int j = i + 1;j <= n;j++) cout<<j<<" ";
			return;
		}
	}
	for(int i = 1;i <= n;i++) cout<<i<<" ";
	cout<<n+1<<" ";
}
