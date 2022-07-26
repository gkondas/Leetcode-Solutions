class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        
        map<char,int> one;
        map<char,int> two;
        
        for(auto it: ransomNote){
            one[it]++;
        }
        
        for(auto it: magazine){
            two[it]++;
        }
        
        
        for(auto it = one.begin();it!= one.end();++it){
            auto foundIt = two.find(it->first);
            
            if(foundIt == two.end()) return false;
            
            if(foundIt->second < it->second) return false;
        }
        
        return true;
        
    }
};