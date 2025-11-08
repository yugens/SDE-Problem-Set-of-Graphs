//Queue is used for the traversal in BFS
//Time complexity o(n) and space complexity o(n)
class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n = adj.size();
        int vis[n] = {0};
        vis[0] = 1;
        queue<int> q;
        q.push(0);
        vector<int> bfs;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it: adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
	}
};
