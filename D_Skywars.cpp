#include<bits/stdc++.h>
using namespace std;
const int INF = 1000000000;
vector<pair<pair<int,int> , int> >adj[100][100];

pair<int,int>p[100][100];
int d[100][100];
void dijkstra(int sx , int sy) {
    int n = 100;
    for(int i = 0 ; i < 100 ; i++){
        for(int j = 0 ; j < 100 ; j++){
            d[i][j] = INF;
            p[i][j] = {-1 , -1};
        }
    }

    d[sx][sy] = 0;
    using pii = pair<int, pair<int,int> >;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, {sx , sy}});
    while (!q.empty()) {
        int vx = q.top().second.first;
        int vy = q.top().second.second;
        int d_v = q.top().first;
        q.pop();
        if (d_v != d[vx][vy])
            continue;

        for (auto edge : adj[vx][vy]) {
            int tox = edge.first.first;
            int toy = edge.first.second;
            int len = edge.second;

            if (d[vx][vy] + len < d[tox][toy]) {
                d[tox][toy] = d[vx][vy] + len;
                p[tox][toy] = {vx , vy};
                q.push({d[tox][toy], {tox , toy}});
            }
        }
    }
}

int main(){
    cout<<"Enter edge number "<<endl;
    int e;cin>>e;
    cout<<"Enter edges and costs "<<endl;
    for(int i = 0 ; i < e ; i++){
        int ux , uy , vx , vy , w;
        cin>>ux>>uy>>vx>>vy>>w;
        adj[ux][uy].push_back({{vx , vy} , w});
    }
    int sx , sy;
    int dx , dy;
    cout<<"Enter soruce: ";cin>>sx>>sy;
    cout<<"Enter destination: ";cin>>dx>>dy;
    dijkstra(sx , sy);
    cout<<d[dx][dy]<<endl;

}