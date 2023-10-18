#include<bits/stdc++.h>
using namespace std;

//vector<vector<int>> adj;
int inf=INT_MAX;
int visited[5] = {0};
int dist[5];
vector<int> path[5];
int minIndex()
{
    int mn = 1222222;
    int mnIn;
    for(int i=0; i<5; i++)
    {

        if(dist[i] < mn && visited[i] == 0)
        {
            mn = dist[i];
            mnIn = i;
        }
    }
    return mnIn;
}

void addEdge(int adj[][5], int x,int y, int cst)
{
    adj[x][y] = cst;
    adj[y][x] = cst;
}
void dijkstra(int adj[][5], int start)
{
    int n=5;
    dist[start] = 0;
    for(int i=0; i<5; i++)
    {
        start = minIndex();
        cout<<start<<endl;
        for(int j=0; j< 5; j++)
        {
            if(adj[start][j] != inf)
            {
                if(dist[j] > dist[start] + adj[start][j])
                {
                    dist[j] = dist[start] + adj[start][j];
                }
            }
        }
        visited[start] = 1;
    }
}

int main()
{
    const int v = 5;
    int adj[v][v];

    for(int i=0; i<v; i++)
    {
        dist[i] = inf;
        for(int j=0; j<v; j++)
        {
            adj[i][j]=inf;
        }
    }

    addEdge(adj,0,1, 12);
    addEdge(adj,0,3, 2);
    addEdge(adj,1,4, 33);

    dijkstra(adj, 0);

    for(int i=0; i<v; i++)
    {
        cout<<dist[i]<<" ";
    }
}
