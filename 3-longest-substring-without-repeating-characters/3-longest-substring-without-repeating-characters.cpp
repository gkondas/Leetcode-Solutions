#include <vector>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        set<char> setty;
        int i = 0;
        int j = 0;
        int out = 0;
        
        
        while(j<s.length()){
            if(setty.find(s[j]) == setty.end()){
                setty.insert(s[j++]);
                out = std::max((int)setty.size(),out);
            }
            else{
                setty.erase(setty.find(s[i++]));
            }
        }
        
        return out;
        
        
    }
};