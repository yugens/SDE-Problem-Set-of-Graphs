//Time complexity is o(n) and space complexity is o(n)
class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	void dfsOfGraph(int node, vector<vector<int>>& adj, int vis[], vector<int>& ans){
        vis[node] = 1;
        ans.push_back(node);
        for(auto it: adj[node]){
            if(!vis[it]){
                dfsOfGraph(it, adj, vis, ans);
            }
        }
    }
	
	vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        int vis[n] = {0};
        int start = 0;
        vector<int> ans;
        dfsOfGraph(start, adj, vis, ans);
        return ans;
    }
};
