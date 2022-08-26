class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        multimap<int,int> mappy;
        
        for(int i =0; i<points.size();i++){
            mappy.insert({points[i][0]*points[i][0] + points[i][1]*points[i][1],i});
        }
        
        vector<vector<int>> out;
        
        auto it = mappy.begin();
        
        while(k>0){
            out.push_back(points[it->second]);
            ++it;
            k--;
        }
        
        return out;
    }
};