#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
string convertTime(string t) {
    int hour, minute;
    stringstream ss(t);
    char delimiter;
    ss >> hour >> delimiter >> minute;
    
    if (hour == 0) {
        return "12:" + (minute < 10 ? "0" + to_string(minute) : to_string(minute)) + " AM";
    } else if (hour < 12) {
        return (hour < 10 ? "0" + to_string(hour) : to_string(hour)) + ":" +
               (minute < 10 ? "0" + to_string(minute) : to_string(minute)) + " AM";
    } else if (hour == 12) {
        return "12:" + (minute < 10 ? "0" + to_string(minute) : to_string(minute)) + " PM";
    } else {
        hour -= 12;
        return (hour < 10 ? "0" + to_string(hour) : to_string(hour)) + ":" +
               (minute < 10 ? "0" + to_string(minute) : to_string(minute)) + " PM";
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        string s;cin>>s;
        cout<<convertTime(s)<<endl;        
    }
    return 0;
}
