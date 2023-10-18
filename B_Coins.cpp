#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define forn for(ll i = 0; i < n; i++)
#define pb push_back
#define tc ll tt, qq=0; cin>>tt; while(qq++<tt)
#define cs cout<<"Case "<<qq<<": "
const ll N = 2e5+5;
const int T = 3;
char l1, op, l2;
map<char, int> ptn;

int delta;
int main(){
     ptn['A'] = 10;
    ptn['B'] = 10;
    ptn['C'] = 10;
     for (int i = 0; i < T; i++) {
        cin >> l1 >> op >> l2;

        if (op == '<') {
            delta = -1;
        } else if (op == '>') {
            delta = +1;
        }

        ptn[l1] += delta;
        ptn[l2] += -delta;
    }


    vector<pair<char, int> > aux;
    for (const auto &p : ptn) {
        aux.push_back(p);
    }

    sort(aux.begin(), aux.end(), [](const auto &p1, const auto &p2) {
            return p1.second < p2.second;
            });

    for (size_t i = 1; i < aux.size(); i++) {
        if (aux[i].second == aux[i-1].second) {
            cout << "Impossible" << endl;
            return 0;
        }
    }

    for (const auto &p : aux) {
        cout << p.first;
    }
    cout << endl;

    return 0;
}