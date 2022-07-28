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
    ListNode* middleNode(ListNode* head) {
        int i =0;
        int get;
        
        ListNode* begin = head;
        
        while(head){
            i++;
            head = head->next;
        }
        
        if(i%2 == 0){
            get = (i/2);
        }
        else{
            get = ceil(i/2);
        }
        
        
        ListNode* ptr = begin;
        while(get>0){
            get--;
            ptr = ptr->next;
        }
        
        return ptr;
        
    }
};