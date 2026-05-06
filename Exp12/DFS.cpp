#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>> &graph, vector<int> &visited, int node, int n) {
    cout << node << " ";
    visited[node] = 1;

    for (int i = 0; i < n; i++) {
        if (graph[node][i] == 1 && visited[i] == 0) {
            dfs(graph, visited, i, n);
        }
    }
}

int main() {
    int n;

    cout << "Enter number of vertices: ";
    cin >> n;

    
    vector<vector<int>> graph(n, vector<int>(n));

    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    vector<int> visited(n, 0);

    cout << "DFS Traversal: ";
    dfs(graph, visited, start, n);

    return 0;
}