#include <iostream>
#include <vector>
#include <queue>

void bfs(int start_node, int num_nodes, const std::vector<std::vector<int>>& adj) {
    std::vector<bool> visited(num_nodes + 1, false); // For 1-indexed nodes
    std::queue<int> q;

    q.push(start_node);
    visited[start_node] = true;

    while (!q.empty()) {
        int current_node = q.front();
        q.pop();

        // Process the current_node (e.g., print it)
        std::cout << current_node << " ";

        for (int neighbor : adj[current_node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    std::cout << std::endl;
}

// Example usage:
// int main() {
//     int n = 7; // Number of nodes
//     std::vector<std::vector<int>> adj(n + 1); // Adjacency list for 1-indexed nodes
//     adj[1].push_back(2); adj[1].push_back(3);
//     adj[2].push_back(1); adj[2].push_back(4); adj[2].push_back(5);
//     adj[3].push_back(1); adj[3].push_back(6); adj[3].push_back(7);
//     adj[4].push_back(2);
//     adj[5].push_back(2);
//     adj[6].push_back(3);
//     adj[7].push_back(3);
//
//     bfs(1, n, adj); // Start BFS from node 1
//     return 0;
// }
