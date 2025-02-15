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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)
        {
            return false;
        }
        ListNode *p_slow = head;
        ListNode *p_fast = head->next;

        while(p_slow!=p_fast)
        {
            if(!p_fast || !p_fast->next)
            {
                return false;
            }
            p_slow = p_slow->next;
            p_fast = p_fast->next->next;
        }
        return true;
    }
};
