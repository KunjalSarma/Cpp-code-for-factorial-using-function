// https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1/#
vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
{

    vector<int> dist(V, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

    dist[S] = 0;
    q.push({0, S});

    while (!q.empty())
    {
        auto curr = q.top();
        q.pop();

        int dis = curr.first;
        int node = curr.second;

        for (auto it : adj[node])
        {
            int child = it[0];
            int weight = it[1];

            if (dist[child] > dis + weight)
            {
                dist[child] = dis + weight;
                q.push({dist[child], child});
            }
        }
    }
    return dist;
}