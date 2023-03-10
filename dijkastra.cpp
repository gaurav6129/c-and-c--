#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    vector<vector<pair<int, pair<int, bool>>>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v, w1, w2;
        cin >> u >> v >> w1 >> w2;
        adj[u].push_back({v, {w1, false}});
        adj[u].push_back({v, {w2, true}});
        adj[v].push_back({u, {w1, false}});
        adj[v].push_back({u, {w2, true}});
    }
    
    vector<int> dist(n + 1, INF);
    dist[a] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, a});
    
    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();
        
        if (d > dist[u]) 
        continue;
        
        for (auto& [v, edge] : adj[u]) {
            int w = edge.first;
            bool curved = edge.second;
            
            if (curved && dist[u] != 0)
             continue;
            int newDist = dist[u] + w;
            
            if (newDist < dist[v]) {
                dist[v] = newDist;
                pq.push({newDist, v});
            }
        }
    }
    
    if (dist[b] == INF) cout << "-1\n";
    else cout << dist[b] << endl;
    
    return 0;
}
