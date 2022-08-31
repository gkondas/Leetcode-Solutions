class Solution {
public:
    int reverse(int x) {
        int out = 0;
        bool isNeg = false;
        if(x < 0) isNeg =true;
        
        while(x){
            
            if(out > INT_MAX / 10 || out <INT_MIN/10) return 0;
            out *= 10;
            out += x %10;
            x = x /10;
        }
        
        
        return out;
    }
};