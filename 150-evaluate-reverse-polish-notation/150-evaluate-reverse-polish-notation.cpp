class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> q;
        
        for(auto c:tokens){
            if(c != "+" && c != "-" && c != "*" && c!="/") q.push(stoi(c));
            else{
                int a = q.top();
                q.pop();
                int b = q.top();
                q.pop();
                
                if(c=="+") q.push(a+b);
                else if(c=="-") q.push(b-a);
                else if(c=="*") q.push(a*b);
                else q.push(b/a);



                
            }
        }
        
        return q.top();
    }
};