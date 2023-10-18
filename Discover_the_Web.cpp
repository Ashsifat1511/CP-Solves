#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define cs cout<<"Case "<<tc<<": "

int main(){
    int t;
    cin>>t;
    getchar();
    for(int k=1;k<=t;k++)
    {
        cout<<"Case "<<k<<":\n";
        stack<string> FORWARD,BACK;
        string str,url;
        FORWARD.push("http://www.lightoj.com/");
        while(1)
        {
            cin>>str;
            string temp;
            if(str=="VISIT")
            {
                cin>>url;

                if(FORWARD.empty())
                    cout<<"Ignored"<<'\n';
                else
                    {

                       temp=FORWARD.top();
                       FORWARD.pop();
                       BACK.push(temp);
                while(!FORWARD.empty())
                       {
                           FORWARD.pop();
                       }
                       FORWARD.push(url);
                    }

                cout<<FORWARD.top()<<'\n';

            }
            else if(str=="BACK")
            {

                if(BACK.empty())
                    cout<<"Ignored"<<'\n';
                else
                {
                    temp=BACK.top();
                    BACK.pop();
                    FORWARD.push(temp);

                    cout<<FORWARD.top()<<'\n';
                }

            }
            else if(str=="FORWARD")
            {
                if(FORWARD.size()<2)
                    cout<<"Ignored"<<'\n';
                else
                {
                    temp=FORWARD.top();
                    FORWARD.pop();
                    BACK.push(temp);
                    cout<<FORWARD.top()<<'\n';
                }
            }
            else if(str=="QUIT")
                break;

        }
    }
    return 0;
}
