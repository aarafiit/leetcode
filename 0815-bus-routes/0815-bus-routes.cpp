class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        
        if(source == target) return 0;
        
        unordered_map<int,vector<int> > adj;
        
        for(int route = 0;route < routes.size();route++){
            for(auto stop : routes[route]){
                adj[stop].push_back(route);
            }
        }
        
        queue<int> q;
        unordered_set<int> vis;
        
        
        for(auto route : adj[source]){
            q.push(route);
            vis.insert(route);
        }
        
        int busCnt = 1;
        while(q.size()){
            int size = q.size();
            
            for(int i = 0;i < size;i++){
                int route = q.front();q.pop();
                for(auto stop : routes[route]){
                    if(stop == target) return busCnt;
                
                
                for(auto nextRoute : adj[stop]){
                    if(!vis.count(nextRoute)){
                        vis.insert(nextRoute);
                        q.push(nextRoute);
                    }
                }
            }
        }
        busCnt++;
                
        }
       return -1; 
    }
    
    
};