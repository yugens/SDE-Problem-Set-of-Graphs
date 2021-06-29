//Time complexity is o(n) and space complexity is o(n)
class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	void dfs(int node,vector<int> &vis,vector<int> adj[],vector<int> &storedfs)
	{
	    storedfs.push_back(node);
	    vis[node]=1;
	    for(auto it:adj[node])
	    {
	    if(!vis[it]);
	    {
	        dfs(it,vis,adj,storedfs);
	    }
	    }
	}
	
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int> storedfs;
	    vector<int> vis(V,0);
	    for(int i=1;i<=V;i++)
	    {
	        if(!vis[i])
	        {
	            dfs(i,vis,adj,storedfs);
	        }
	    }
	    return storedfs;
	    
	}
};
