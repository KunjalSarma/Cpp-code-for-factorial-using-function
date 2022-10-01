// https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1/
vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    queue<int> q;
    int vis[V];
    memset(vis, 0, sizeof vis);
    vector<int> ans;
    q.push(0);
    for (int i = 0; i < V; i++)
    {
        if (vis[i] == 0)
        {
            while (!q.empty())
            {
                int e = q.front();
                q.pop();
                ans.push_back(e);
                for (auto n : adj[e])
                {
                    if (vis[n] == 0)
                    {
                        q.push(n);
                        vis[n] = 1;
                    }
                }
            }
        }
    }
    return ans;
}