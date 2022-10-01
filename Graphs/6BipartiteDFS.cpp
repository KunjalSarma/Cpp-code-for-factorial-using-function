// https://practice.geeksforgeeks.org/problems/bipartite-graph/1#
void dfs(int ele, int c, vector<int> &col, vector<int> adj[], bool &ans)
{
    col[ele] = c;
    for (auto e : adj[ele])
    {
        if (col[e] == -1)
        {
            dfs(e, !c, col, adj, ans);
        }
        else if (col[e] == c)
        {
            ans = false;
        }
    }
}
bool isBipartite(int V, vector<int> adj[])
{
    // Code here
    vector<int> col(V, -1);
    bool ans = true;
    for (int i = 0; i < V; i++)
    {
        if (col[i] == -1)
        {
            dfs(i, 0, col, adj, ans);
        }
    }
    return ans;
}
