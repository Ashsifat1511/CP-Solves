#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

typedef  long long int ll;

#define cs cout<<"Case "<<tc<<": "

const int M=5000000;

int phi[M+2];
unsigned long long phiSum[M+2];


int main(){

    for(int i=2; i<=M; i++)
        phi[i] = i;
    for(int i =2; i<=M; i++)
        if(phi[i]==i)
            for(int j=i; j<=M; j+=i)
                phi[j]-=phi[j]/i;
    phiSum[1] = 0;
    for(int i=2; i<=M; i++) phiSum[i]= ((unsigned long long)phi[i]* (unsigned long long)phi[i])+phiSum[i-1];
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        int a,b;
        cin>>a>>b;
        unsigned long long x = phiSum[b]-phiSum[a-1];
        cs<<x<<endl;
    }
    return 0;
}
