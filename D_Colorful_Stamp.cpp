#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
void solve(){
	int n;
	string p;
	cin>>n;
	cin>>p;
	p="W"+p+"W";
	int r=0,b=0;
	for(int i=0;i<p.size();i++)
	{
	
		if(p[i]=='R') 
		{
		r++;
		continue;
			
		}
		if(p[i]=='B') {
			b++;
			continue;
		}
		if((r!=0&&b==0)||(r==0&&b!=0))
			{
			cout<<"NO"<<endl;
			return;
			}
			r=0;
			b=0;
			}
	
	cout<<"YES"<<endl;
	return;
	}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++) solve();
    return 0;
}
