class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int start = 0;
        int end = 0;

        int l = 0;
        int r = height.size()-1;
        
        
        while(l<r){
            int h = min(height[l],height[r]);
            area = max( ((r-l) *h  ), area);
            
            if(height[l] < height[r]) l++;
            else r--;

        }
        
        return area;
        
    }
};