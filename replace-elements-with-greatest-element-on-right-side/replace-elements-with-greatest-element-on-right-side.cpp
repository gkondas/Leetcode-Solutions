class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int l = 0;
        int r = (int)arr.size() - 1;
        
        while(l < (int)arr.size()){
            int maxSeen = 0;
            int r = (int)arr.size() - 1;
            while (l < r){
                maxSeen = max(maxSeen,arr[r]);
                r--;
            }
            arr[l++] = maxSeen;
        }
        
        arr[(int)arr.size() - 1] = -1;
        
        return arr;
        
    }
};