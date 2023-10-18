#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin >> n;
		vector <int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		vector<int> res;
		for(int i = 0; i < n; i++){
			int l = 1, r = i + 1;
			while(l <= r){
				int m = (l + r) / 2;
				if(a[i - m + 1] >= m){
					l = m + 1;
				}else{
					r = m - 1;
				}
			}
			res.push_back(r);
		}
		for(auto i : res){
			cout << i << " ";
		}
		cout<<endl;
    }
    return 0;
}