#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {2, 5}, {3, 4}};
    vector<int> adj[6];
    for(auto it : v) {
        adj[it.first].push_back(it.second);
        adj[it.second].push_back(it.first);
    }
    queue<int> q;
    q.push(1);
    vector<int> vis(6, 0);
    vis[1] = 1;
    while(!q.empty()) {
        int node = q.front();
        cout<<node<<endl;
        q.pop();
        for(auto it : adj[node]) {
            if(!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
}