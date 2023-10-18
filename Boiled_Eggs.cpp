#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;

    for(int t = 1; t <= testcase; t++){
        int n, P, Q;
        cin >> n >> P >> Q;

        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        int mx = 0;
        for(int i = 0; i < n; i++){

            int counter = 0, sumOfWeight = 0;
            for(int j = i; j < n; j++){
                if(counter + 1 <= P && sumOfWeight + a[j] <= Q) {
                    sumOfWeight += a[j];
                    counter++;
                    mx = max(mx, counter);
                }
                else break;
            }

        }

        cout << "Case " << t << ": " << mx << endl;
    }
}
