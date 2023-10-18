#include<bits/stdc++.h>

using namespace std;
#define N 100000
double pro[N + 4];
int cnt[N+ 4];
int main()
{
    double sum;
    double temp;
    int x;
    int n;

    for (int i = 2; i <= N; i++) {
            sum = pro[i];
            n = cnt[i];
            n += 2;
            sum += n;
            sum = sum / (double) (n -1);
            pro[i] = sum;
            for (int j =  2 * i; j <= N; j = j + i) {
            cnt[j]++;
            pro[j] += sum;
        }

    }
    int t;
    scanf("%d", &t);
    for (int cs = 1; cs<= t; cs++) {
        scanf("%d", &x);
        printf("Case %d: %lf\n", cs, pro[x]);
    }
return 0;
}
