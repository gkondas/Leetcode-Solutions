class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> letters;
        
        int out = 0;
        for(auto it:s){
            letters[it]++;
            if(letters[it] == 2){
                out+=2;
                letters[it] = 0;
            }
        }
        
        for(auto it:letters){
            if(it.second == 1){
                out++;
                break;
            }
        }
        
        
        return out;
        
        
    }
};