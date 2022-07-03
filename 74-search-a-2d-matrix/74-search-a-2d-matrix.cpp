class Solution {
public:
    bool searchRow(vector<int> &row,int target){
        for(auto &num: row){
            if(num==target) return true;
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row;
        
        for(auto row:matrix){
            if(target<= row[(int)row.size()-1]){
                return searchRow(row,target);
            }
        }
        
        return false;
    }
};