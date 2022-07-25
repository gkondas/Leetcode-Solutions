class Solution 
{
public:
    int search(vector<int>& nums, int target) {
        int l =0;
        int r = (int) nums.size() -1;
        
        while(l<r-1){
            int mid = floor((l+r) / 2);
            
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                l = mid+1;
            }
            else {
                r = mid -1;
            }
        }
        
        if(nums[l] == target) return l;
        if(nums[r] == target) return r;
        
        
        return -1;
        
    }
};