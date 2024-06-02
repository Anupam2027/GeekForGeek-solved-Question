//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     // Function to detect cycle in an undirected graph.
     
    bool BFS(int vertex ,vector<int>adj[],vector<bool>&visited)
    {
        queue<pair<int,int>>q;
        visited[vertex ]=1;
        q.push(make_pair(vertex ,-1)); //node and parent
        while(!q.empty())
        {
            int node=q.front().first;
            int parent = q.front().second;
            q.pop();
            
            for(int j=0;j<adj[node].size();j++)
            {
                if(parent==adj[node][j])
                continue;
                if(visited[adj[node][j]])
                return 1;
                
                visited[adj[node][j]]=1;
                q.push(make_pair(adj[node][j],node));
                
            }
        }
        
    return 0;    
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool>visited(V,0);
        
        for(int i=0;i<V;i++)
        {
            if(!visited[i] && BFS(i,adj,visited))
            return 1;
        }
        return 0;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends