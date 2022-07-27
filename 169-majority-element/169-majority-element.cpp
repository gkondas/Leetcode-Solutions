class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = (int) nums.size();
        
        int thresh = floor(size/2);
        
        map<int,int> mappy;
        
        for(auto it:nums){
            mappy[it]++;
            
            if(mappy[it] > thresh) return it;
        }
        
        return -1;
        
    }
};