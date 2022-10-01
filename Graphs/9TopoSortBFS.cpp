// https://practice.geeksforgeeks.org/problems/topological-sort/1/#
vector<int> topoSort(int V, vector<int> adj[])
{
    // code here
    vector<int> indegree(V, 0);
    for (int i = 0; i < V; i++)
    {
        for (auto e : adj[i])
        {
            indegree[e]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < V; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    vector<int> ans;
    while (!q.empty())
    {
        int ele = q.front();
        q.pop();
        ans.push_back(ele);
        for (auto e : adj[ele])
        {
            if (indegree[e] != 0)
            {
                indegree[e]--;
                if (indegree[e] == 0)
                {
                    q.push(e);
                }
            }
        }
    }
    return ans;
}