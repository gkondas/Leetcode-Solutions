class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> one;
        map<char,int> two;
        
        
        for(auto i:s){
            one[i]++;
        }
        for(auto i:t){
            two[i]++;
        }
        
        int oneSize = (int) one.size();
        int twoSize = (int) two.size();
        
        if(oneSize!= twoSize) return false;
        
        
        auto oneIt = one.begin();
        auto twoIt = two.begin();
        
        while(oneIt != one.end() && twoIt != two.end()){
            if(oneIt->first != twoIt->first) return false;
            if(oneIt->second != twoIt->second) return false;
            
            ++oneIt;
            ++twoIt;
        }
        
        return true;

    }
};