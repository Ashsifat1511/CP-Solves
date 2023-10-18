#include <iostream>
#include <vector>
#include <limits>

const int INF = std::numeric_limits<int>::max();

std::vector<std::vector<int>> floydWarshall(const std::vector<std::vector<int>>& graph) {
    int n = graph.size();
    std::vector<std::vector<int>> dist(n, std::vector<int>(n, INF));

    for (int u = 0; u < n; ++u) {
        dist[u][u] = 0;

        for (int v = 0; v < n; ++v) {
            if (u != v && graph[u][v] != 0) {
                dist[u][v] = graph[u][v];
            }
        }
    }

    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    return dist;
}

int main() {
    std::vector<std::vector<int>> graph = {
        {0, 1, 0, 1},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
        {1, 0, 0, 0}
    };

    std::vector<std::vector<int>> result = floydWarshall(graph);

    // Print the two-way path matrix
    for (const auto& row : result) {
        for (int distance : row) {
            if (distance == INF) {
                std::cout << "INF ";
            } else {
                std::cout << distance << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
