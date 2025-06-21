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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* answer = new ListNode(0);
        ListNode* current = answer;
        while(l1 || l2 || carry){
            int digit1 = l1 ? l1->val:0;
            int digit2 = l2 ? l2->val:0;
            int sum = digit1 + digit2 + carry;
            current -> next = new ListNode(sum%10);
            current = current -> next;
            carry = sum/10;
            l1 = l1 ?  l1->next : nullptr;
            l2 = l2 ?  l2->next : nullptr;
        }
        return answer -> next;
    }
};