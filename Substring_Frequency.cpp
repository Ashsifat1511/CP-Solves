#include <bits/stdc++.h>
using namespace std;

void computeLPSArray(char *pattern, int M, int *lps)
{
    int len = 0;

    lps[0] = 0;
    int i = 1;
    while (i < M)
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else{
                if (len != 0) len = lps[len - 1];
                else {
                    lps[i] = 0;
                    i++;
                }
            }
    }
}

int KMPSearch(char *pattern, char *txt)
{
    int M = strlen(pattern);
    int N = strlen(txt);
    int lps[M];
    computeLPSArray(pattern, M, lps);
    int i = 0;
    int j = 0;
    int total = 0;
    while (i < N)
    {
        if (pattern[j] == txt[i])
        {
            j++;
            i++;
        }

        if (j == M)
        {
            total++;
            j = lps[j - 1];
        }
        else if (i < N && pattern[j] != txt[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }

    return total;
}

int main()
{
    int test;
    cin >> test;
    char txt[1000001], pattern[1000001];
    for (int t = 1; t <= test; t++)
    {
        cin >> txt >> pattern;
        int total = KMPSearch(pattern, txt);
        cout << "Case " << t << ": " << total << '\n';

    }
}
