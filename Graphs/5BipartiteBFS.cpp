// https://practice.geeksforgeeks.org/problems/bipartite-graph/1#
bool isBipartite(int V, vector<int> adj[])
{
    // Code here
    vector<int> col(V, -1);
    for (int i = 0; i < V; i++)
    {
        if (col[i] == -1)
        {
            queue<int> q;
            q.push(i);
            col[i] = 0;
            while (!q.empty())
            {
                int ele = q.front();
                q.pop();
                for (auto x : adj[ele])
                {
                    if (col[x] == -1)
                    {
                        col[x] = !col[ele];
                        q.push(x);
                    }
                    else if (col[x] == col[ele])
                    {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
