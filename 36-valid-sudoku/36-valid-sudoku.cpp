class Solution {
public:
    char period = '.';
    char comma = ',';
    
    bool checkRow(vector<vector<char>>& board){
        for(auto row:board){
            map<char,int> mp;
            
            for(auto val:row){
                
                if(val == period || val == comma) continue;
                if(mp.find(val) == mp.end()){
                    mp[val];
                }
                else{
                    return false;
                }
            }
        }
        
        return true;
    }
    
    bool checkCols(vector<vector<char>>& board){
        for(int c=0;c<9;c++){
            map<char,int> mp;
            for(int r=0;r<9;r++){
                if(board[r][c] == comma || board[r][c] ==                                                    period) continue;
                if(mp.find(board[r][c]) == mp.end()){
                    mp[board[r][c]];
                }
                else{
                    return false;
                }
            }
        }
        
        return true;
    }
    
    bool checkBoxes(vector<vector<char>>& board){
        int colStart = 0;
        int rowStart = 0;
        while(rowStart <7){
            map<char,char> mp;
            
            for(int r=rowStart;r<rowStart+3;r++){
                for(int c=colStart;c<colStart+3;c++){
                    
                    if(board[r][c] == comma || board[r][c] == period) continue;
                    if(mp.find(board[r][c]) == mp.end()){
                        mp[board[r][c]];
                    }
                    else{
                        return false;
                    }
                }
            }
            colStart+=3;
            if(colStart == 9){
                colStart = 0;
                rowStart +=3;
            }
        }
       return true; 
    }
    
    
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows = checkRow(board);
        bool cols = checkCols(board);
        bool boxes = checkBoxes(board);
        return rows && cols && boxes;
    }
};