#include <map>
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp;
        vector<int> out;
        
        for(auto it:nums1){
            mp[it]++;
        }
        
        for(auto it:nums2){
            if(mp[it] > 0){
                out.push_back(it);
                mp[it]--;   
            } 
        }
        
        return out;
        
        
    }
};