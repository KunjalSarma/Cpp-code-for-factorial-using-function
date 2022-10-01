// https://practice.geeksforgeeks.org/problems/topological-sort/1/
void dfs(int ele, vector<int> &vis, stack<int> &st, vector<int> adj[])
{
    vis[ele] = 1;
    for (auto e : adj[ele])
    {
        if (vis[e] == 0)
        {
            dfs(e, vis, st, adj);
        }
    }
    st.push(ele);
}
vector<int> topoSort(int V, vector<int> adj[])
{
    // code here
    stack<int> st;
    vector<int> vis(V, 0), ans;
    for (int i = 0; i < V; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i, vis, st, adj);
        }
    }
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}