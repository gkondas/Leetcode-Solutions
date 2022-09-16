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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* out = head;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(n>0){
            fast = fast->next;
            n--;
        }
        
        if(!fast) return head->next;
        
        while(fast && fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        
        
        
        
        slow->next = slow->next->next;
        
        return out;
        
        
    }
};