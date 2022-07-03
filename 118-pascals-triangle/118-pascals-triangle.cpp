class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> out;
       
        
        for(int r=0;r<numRows;r++){
            vector<int> row;
            
            for(int c=0;c<r+1;c++){
                
                if(c==0 || c==r) row.push_back(1);
                
                else{
                    row.push_back(out[r-1][c-1]+out[r-1][c]);
                }
            }
            
            out.push_back(row);
        }
        
        
        return out;
        
    }
};