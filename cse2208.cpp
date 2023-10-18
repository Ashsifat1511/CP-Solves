
#include <bits/stdc++.h>
using namespace std;

const int V = 5;

vector<int> final_ans;

int visited_nodes[V];

int minimum_key(int key[], bool mstSet[])
{
    int mini = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < mini)
            mini = key[v], min_index = v;

    return min_index;
}

vector<vector<int>> MST(int parent[], int graph[V][V])
{
    vector<vector<int>> v;
    for (int i = 1; i < V; i++)
    {
        vector<int> p;
        p.push_back(parent[i]);
        p.push_back(i);
        v.push_back(p);
        p.clear();
    }
    return v;
}

vector<vector<int>> primMST(int graph[V][V])
{
    int parent[V];
    int key[V];

    bool mstSet[V];

    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;

    key[0] = 0;
    parent[0] = -1;

    for (int cnt = 0; cnt < V - 1; cnt++)
    {
        int u = minimum_key(key, mstSet);
        mstSet[u] = true;
        for (int v = 0; v < V; v++)
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }
    vector<vector<int>> v;
    v = MST(parent, graph);
    return v;
}

void DFS(int **edges_list, int num_nodes, int starting_vertex)
{
    final_ans.push_back(starting_vertex);

    visited_nodes[starting_vertex] = true;

    for (int i = 0; i < num_nodes; i++)
    {
        if (i == starting_vertex)
        {
            continue;
        }
        if (edges_list[starting_vertex][i] == 1)
        {
            if (visited_nodes[i])
            {
                continue;
            }
            DFS(edges_list, num_nodes, i);
        }
    }
}
int main()
{
    int graph[V][V];
    int n = (V * (V - 1)) / 2;
    for (int i = 0; i < n; i++)
    {
        int a, b, wt;
        cin >> a >> b >> wt;
        graph[a][b] = wt;
        graph[b][a] = wt;
    }
    vector<vector<int>> v;

    v = primMST(graph);

    int **edges_list = new int *[V];
    for (int i = 0; i < V; i++)
    {
        edges_list[i] = new int[V];
        for (int j = 0; j < V; j++)
        {
            edges_list[i][j] = 0;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        int first_node = v[i][0];
        int second_node = v[i][1];
        edges_list[first_node][second_node] = 1;
        edges_list[second_node][first_node] = 1;
    }

    /*bool *visited_nodes = new bool[V];
    for (int i = 0; i < V; i++)
    {
        bool visited_node;
        visited_nodes[i] = false;
    }*/

    for (int j = 0; j < V; j++)
    {
        DFS(edges_list, V, j);
        final_ans.push_back(final_ans[0]);
        cout << j << "- ";
        for (int i = 0; i < final_ans.size(); i++)
        {
            if (i == final_ans.size() - 1)
                cout << final_ans[i] << endl;
            else
                cout << final_ans[i] << "->";
        }
        final_ans.clear();
        for (int i = 0; i < V; i++) visited_nodes[i]=0;
    }
    return 0;
}
