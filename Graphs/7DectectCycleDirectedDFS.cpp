// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
// https://takeuforward.org/data-structure/detect-a-cycle-in-directed-graph-using-dfs/
bool dfs(int ele, vector<int> &vis, vector<int> &dfsv, vector<int> adj[])
{
    vis[ele] = 1;
    dfsv[ele] = 1;
    for (auto e : adj[ele])
    {
        if (!vis[e])
        {
            if (dfs(e, vis, dfsv, adj))
                return true;
        }
        else if (dfsv[e])
        {
            return true;
        }
    }
    dfsv[ele] = 0;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    // code here
    vector<int> vis(V, 0);
    vector<int> dfsv(V, 0);
    for (int i = 0; i < V; i++)
    {
        if (vis[i] == 0)
        {
            if (dfs(i, vis, dfsv, adj))
                return true;
        }
    }
    return false;
}