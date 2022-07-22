class Solution {
public:
    bool isValid(string s) {
        
        if(s.size() % 2 != 0) return false;
        
        stack<char> stacky;
        
        for(auto c:s){
            if(c == '(' || c == '{' || c =='['){
                stacky.push(c);
            }
            else if(c == ')' && !stacky.empty() && stacky.top() == '('){
                stacky.pop();
            }
            else if(c == '}' && !stacky.empty() && stacky.top() == '{'){
                stacky.pop();
            }
            else if(c == ']' && !stacky.empty() && stacky.top() == '['){
                stacky.pop();
            }
            else{
                return false;
            }
        }
        
        return stacky.empty();
        
    }
};