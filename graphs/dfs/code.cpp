#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void dfs(int node, vector<int> adj[], vector<int> &vis) {
    vis[node] = 1;
    cout<<node<<endl;
    for(auto it : adj[node]) {
        if(!vis[it]) {
            vis[it] = 1;
            dfs(it, adj, vis);
        }
    }
}

int main() {
    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {2, 5}, {3, 4}};
    vector<int> adj[6];
    for(auto it : v) {
        adj[it.first].push_back(it.second);
        adj[it.second].push_back(it.first);
    }
    vector<int> vis(6, 0);
    dfs(1, adj, vis);
    
}