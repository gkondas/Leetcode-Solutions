class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int k = 1;
        int i = 1;
        int current = nums[0];
        
        for(int j=1; j<nums.size();j++){
            if(nums[j] != current){
                nums[i++] = nums[j];
                current = nums[j];
                k++;
            }
        }
        
        return k;
        
    }
};