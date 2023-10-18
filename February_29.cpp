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
        string start_month, end_month;
        char comma;
        int start_date, end_date, start_year, end_year;
        cin >> start_month >> start_date >> comma >> start_year;
        cin >> end_month >> end_date >> comma >> end_year;
        if (start_month == "January" or start_month == "February") start_year = start_year;
        else start_year++;
        if (end_month == "January" or (end_month == "February" and end_date < 29)) end_year--;
        else end_year = end_year;
        int mul_of_4 = end_year / 4 - (start_year - 1) / 4;
        int mul_of_400 = end_year / 400 - (start_year - 1) / 400;
        int mul_of_100 = end_year / 100 - (start_year - 1) / 100;
        int total = mul_of_4 + mul_of_400 - mul_of_100;
        cs<<total << endl;        
    }
    return 0;
}
