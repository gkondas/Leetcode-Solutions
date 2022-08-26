class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> out;
        int n =(int) nums.size();
        
        for(int i = 0; i < n - 2; i++){
            if(i==0 || i>0 && nums[i] != nums[i-1]){
                int l = i+1;
                int r= n-1;
                int sum = 0-nums[i];
                
                while(l<r){
                    int now = nums[l] + nums[r];
                    if(now == sum){
                        vector<int> add = {nums[i],nums[l],nums[r]};
                        out.push_back(add);
                        
                        while(l<r && nums[l] == nums[l+1]) l++;
                        while(l<r && nums[r] == nums[r-1]) r--;
                        l++;
                        r--;
                    }
                    else if(now > sum){
                        r--;
                    }
                    else{
                        l++;
                    }
                }
                
            }
            
        }
        
        return out;
        
        
    }
};