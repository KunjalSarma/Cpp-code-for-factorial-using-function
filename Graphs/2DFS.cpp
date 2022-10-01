// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1/
void dfs(int ele, vector<int> &vis, vector<int> &ans, vector<int> adj[])
{
    ans.push_back(ele);
    vis[ele] = 1;
    for (auto e : adj[ele])
    {
        if (vis[e] == 0)
        {
            dfs(e, vis, ans, adj);
        }
    }
}
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    vector<int> vis(V, 0), ans;
    for (int i = 0; i < V; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i, vis, ans, adj);
        }
    }
    return ans;
}