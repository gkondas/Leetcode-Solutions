class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> out;
        
        int totalProd = 1;
        int numZero = 0;
        
        for(auto num:nums){
            if(num!=0) totalProd *= num;
            if(num == 0)numZero++;
        }
        
        if(numZero == 0){
            for(int i =0;i<nums.size();i++){
                out.push_back(totalProd / nums[i]);
            }
        }
        else if (numZero == nums.size()){
            for(int i =0;i<nums.size();i++){
                out.push_back(0);
            }
        }
        else if(numZero > 1) {
            for(int i =0;i<nums.size();i++){
                out.push_back(0);
            }
        }
        
        else{
            for(int i =0;i<nums.size();i++){
                if(nums[i] == 0) out.push_back(totalProd);
                else out.push_back(0);
            }
        }

        return out;
    }
};