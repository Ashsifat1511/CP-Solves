#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define cs cout<<"Case "<<tc<<": "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n;cin>>n;
        char s[100];
        int ans=0,cnt1=0,cnt2=0;
        int i=0;
        while(n>0){
            if(n%2==1){
                s[i]='1';
                cnt1++;
            }
            else s[i]='0';
            n/=2;
            i++;
        }
        s[i]='\0';
        int j=0;
        for(j=0;;j++){
            if(s[j]=='1'){
                while(s[j]=='1'){
                    s[j]='0';
                    j++;
                }
                s[j]='1';
                break;
            }
        }
            if(i==j) s[j+1]='\0';
            else s[i]='\0';
            for(i=0;i<s[i]!='\0';i++){
                if(s[i]=='1') cnt2++;
                else continue;
            }
        int flag=cnt1-cnt2;
        for(int k=0;k<flag;k++) s[k]='1';
        for(int k=0;s[k]!='\0';k++){
            int temp = s[k]-'0';
            ans+=temp*pow(2,k);
        }
        cs<<ans<<endl;
    }
    return 0;
}

