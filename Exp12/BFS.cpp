#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<vector<int>> &graph, int start, int n) {
    vector<int> visited(n, 0);  // dynamically sized visited array
    queue<int> q;

    q.push(start);
    visited[start] = 1;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int i = 0; i < n; i++) {
            if (graph[node][i] == 1 && visited[i] == 0) {
                q.push(i);
                visited[i] = 1;
            }
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

    cout << "BFS Traversal: ";
    bfs(graph, start, n);

    return 0;
}