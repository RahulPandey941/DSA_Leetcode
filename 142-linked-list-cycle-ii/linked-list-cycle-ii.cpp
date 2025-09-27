/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slw = head;
        ListNode* fst = head;
        bool isCycle = false;
        while(fst != nullptr && fst->next != nullptr){
            slw = slw->next;
            fst = fst->next->next;
            if(slw == fst){
                isCycle = true;
                slw = head;
                break ;
            }
        }
        if(isCycle){
            while(slw != fst){
                slw = slw->next;
                fst = fst->next;
            }
            return slw;
        }
        return NULL;
    }
};