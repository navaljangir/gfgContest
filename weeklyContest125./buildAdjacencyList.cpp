class Solution{
  public:
  vector<vector<int>> generateAdjacencyList(int V, int E, vector<vector<int>> &edges)
  {
      // Write Code Here
      vector<vector<int>> adj(V);
      map<int , set<int>>mp;
      for(int i  = 0 ; i<edges.size(); i++){
          int u = edges[i][0];
          int v = edges[i][1];
              mp[u].insert(v);
              mp[v].insert(u);
      }
      for(auto i : mp){
          set<int> s = i.second;
          for(auto j : s){
              adj[i.first].push_back(j);
          }
      }
      return adj;
  }
};
