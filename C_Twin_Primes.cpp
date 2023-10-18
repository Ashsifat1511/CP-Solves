#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;
const int N = 1e5+10;
vector<bool> isPrime(N,1);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;i++){
        if(isPrime[i]==true){
            for(int j=2*i;j<N;j+=i){
                isPrime[j]=false;
            }
        }
    }
    vector<pair<int,int>> v(N);
    for(int i=2,j=0;i<N;i++){
        if(isPrime[i]&&isPrime[i+2]){
            v[j].first = i;
            v[j].second = i+2;
            j++;
        }
    }
    int n;
    while(scanf("%d",&n)==1){
        cout<<"("<<v[n-1].first<<", "<<v[n-1].second<<")"<<endl;
    }
    return 0;
}
