#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define forn for (int i = 0; i < n; i++)

const int N = 1e6 + 7;

typedef long long int ll;

#define pb push_back

#define cs cout << "Case #" << tc << ": "
bool vis[1010] = {0};
vector<pair<int, int>> adj[1010];
int Prims(int src)
{
    int cost = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    while (!pq.empty())
    {
        pair<int, int> p = pq.top();
        pq.pop();
        int u = p.second;
        int ct = p.first;
        if (!vis[u])
        {
            cost += ct;
            for (auto iv : adj[u])
            {
                if (iv.first)
                    pq.push({iv});
            }
            vis[u] = 1;
        }
    }
    return cost;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        int node, edge, a;
        cin >> node >> edge >> a;
        int cnt = 0;
        for (int i = 0; i < edge; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back({w, v});
            adj[v].push_back({w, u});
        }
        int cost = 0;
        for (int i = 1; i <= node; i++)
        {
            if (!vis[i])
            {
                cnt++;
                cost += Prims(i);
            }
        }
    }
    return 0;
}
