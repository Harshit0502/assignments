#include <iostream>
#include <vector>

std::vector<bool> visited_dfs; // Global or passed by reference

void dfs(int current_node, const std::vector<std::vector<int>>& adj) {
    visited_dfs[current_node] = true;

    // Process the current_node (e.g., print it)
    std::cout << current_node << " ";

    for (int neighbor : adj[current_node]) {
        if (!visited_dfs[neighbor]) {
            dfs(neighbor, adj);
        }
    }
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
//     visited_dfs.assign(n + 1, false); // Initialize visited array
//     dfs(1, adj); // Start DFS from node 1
//     std::cout << std::endl;
//     return 0;
// }
