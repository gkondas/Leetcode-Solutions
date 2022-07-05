class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string out = "";
        
        for(int i=0;i< strs[0].length();i++){
            char current = strs[0][i];
            for(auto it:strs){
                if(current != it[i]){
                    
                    return out;
                }
            }
            out+=current;
        }
       return out;     
    }
};