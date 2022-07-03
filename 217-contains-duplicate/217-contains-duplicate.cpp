#include <map>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        map<int,int> mappy;
        for(auto i:nums){
            auto it = mappy.find(i);
            
            
            if(it != mappy.end()){
                return true;
            }
            
            mappy[i]++;
        }
        
        return false;
    }
};