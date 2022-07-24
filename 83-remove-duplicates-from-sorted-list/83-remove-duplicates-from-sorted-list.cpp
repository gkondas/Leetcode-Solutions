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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(!head) return nullptr;
        
        ListNode* out = head;

        ListNode* lastNew = head;
        int lastSeen = head->val;
        
        while(head){
            if(!head->next){
                lastNew->next = nullptr;
            }
            if(head->val != lastSeen){
                lastNew->next = head;
                lastNew = head;
                lastSeen = head->val;
            }
            
            head= head->next;
        }
        
        
        return out;
        
        
    }
};