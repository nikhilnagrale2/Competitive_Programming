class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses);
        vector<vector<int>> graph(numCourses);
        for(auto p:prerequisites){
            graph[p[1]].push_back(p[0]),indegree[p[0]]++;
        }
        
        set<pair<int,int>> sp;
        
        for(int i=0;i<numCourses;i++){
            sp.insert({indegree[i],i});
        }
        
        vector<int> ans;
        while(!sp.empty()){
            auto pair=*(sp.begin());
            
            if(pair.first){
                ans.clear();
                break;
            }
            ans.push_back(pair.second);
            
            sp.erase(pair);
            
            for(auto k:graph[pair.second]){
                if(indegree[k])
                sp.erase({indegree[k],k}),indegree[k]--,sp.insert({indegree[k],k});
            }
        }
        return ans;
    }
};