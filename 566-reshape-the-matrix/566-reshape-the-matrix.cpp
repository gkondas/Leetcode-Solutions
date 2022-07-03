#include <vector>
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int origHeight = (int)mat.size();
        int origWidth = (int) (mat[0].size());
        
        int orig2DSize = origHeight * origWidth;
        
        if(orig2DSize != r *c) return mat;
        
        vector<int> temp;
        
        for(int i=0;i< origHeight;i++){
            for(int j=0;j<origWidth;j++){
                temp.push_back(mat[i][j]);
            }
        }
        
        int tempIndex = 0;
        
        vector<vector<int>> out;
        
        for(int i=0;i<r;i++){
            vector<int> row;
            for(int j=0;j<c;j++){
                row.push_back(temp[tempIndex]);
                tempIndex++;
            }
            
            out.push_back(row);
        }
        
        
        return out;

    }
};