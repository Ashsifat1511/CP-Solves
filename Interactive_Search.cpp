#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string resp;
    getline(cin , resp) ;
    long long low = 1 , hi = n ,  mid  ;
    while (true) {
        mid = (low + hi) / 2 ;
        cout << "guess " << mid << endl;
        getline(cin, resp);

        if (resp == "correct" || resp == "too many tries") break;
        if (resp == "low") low = mid+1;
        else hi = mid-1;
    }
}

