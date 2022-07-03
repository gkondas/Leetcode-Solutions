/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        
        vector<int> all;
        ListNode* now = list1;
        while(now){
            all.push_back(now->val);
            now = now->next;
        }
        now = list2;
        while(now){
            all.push_back(now->val);
            now = now->next;
        }
        
        std::sort(all.begin(),all.end());
        
        ListNode* out;
        ListNode* ptr;
        bool first = true;
        
        for(auto it:all){
            ListNode* current = new ListNode();
            if(first){
                out = current;
                ptr = out;
                first = false;
            }
            current->val = it;
            ptr->next = current;
            ptr = current;
        }
        
        return out;
        
    }
};