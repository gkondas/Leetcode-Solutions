class Solution {
public:
    string addBinary(string a, string b) {
        string out = "";
        int i = a.length()-1;
        int j = b.length()-1;
        int carry = 0;
        
        
        while(i>=0 || j >= 0){
            int sum = carry;
            if(i>=0) sum += a[i] - '0';
            if(j>=0) sum += b[j] - '0';
            out += ((sum %2) + 48);
            carry = sum /2;
            
            i--;
            j--;
        }
        
        if(carry != 0) out+= '1';
        
        reverse(out.begin(),out.end());
        
        return out;
    }
};