class Solution {
public:
    bool isPalindrome(string s) {
        string made;
        for(auto it:s){
            if(it > 0 && (isalpha(it) || isdigit(it)) ) made += tolower(it);
        }
        
        int i = 0;
        int j = made.size() - 1;
        
        
        while (i < j){
            if(made[i] != made[j]) return false;
            i++;
            j--;
        }
        
        return true;
    }
};