using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxSum = nums[0];
        int sum = 0;
        
        for(auto i : nums){
            
            if(sum <0) sum =0;
            sum += i;
            maxSum = max(sum,maxSum);
        }
        
        return maxSum;
        
    }
};