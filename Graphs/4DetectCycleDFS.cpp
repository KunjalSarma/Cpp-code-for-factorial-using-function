// https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1#
void cycledfs(int ele, vector<int> &vis, vector<int> adj[], int parent, bool &f)
{
    vis[ele] = 1;
    for (auto e : adj[ele])
    {
        if (vis[e] == 0)
        {
            cycledfs(e, vis, adj, ele, f);
        }
        else if (e != parent)
        {
            f = true;
        }
    }
}
bool isCycle(int V, vector<int> adj[])
{
    // Code here
    bool f = false;
    vector<int> vis(V, 0);
    for (int i = 0; i < V; i++)
    {
        if (vis[i] == 0)
        {
            cycledfs(i, vis, adj, -1, f);
        }
    }
    return f;
}