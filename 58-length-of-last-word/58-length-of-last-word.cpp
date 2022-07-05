class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream is(s);
        int length =0;
        string word;
        while(is >> word){
            length = word.length();
        }
        
        return length;
    }
};