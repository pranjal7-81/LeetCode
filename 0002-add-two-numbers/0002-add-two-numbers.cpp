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
        ListNode *head = new ListNode(0);
        ListNode* curr = head;
        while(l1 && l2){
            int sum = l1->val + l2->val + carry;
            carry = sum/10;
            int final = sum%10;
            curr->next = new ListNode(final);
            curr = curr->next;
            
            l1 = l1->next;
            l2 = l2->next;

        }
        while(l1){
            int x = l1->val + carry;
            carry = x/10;
            int final = x%10;
            curr->next = new ListNode(final);
            curr = curr->next;
            l1 = l1->next;
        }

        while(l2){
            int x = l2->val + carry;
            carry = x/10;
            int final = x%10;
            curr->next = new ListNode(final);
            curr = curr->next;
            l2 = l2->next;
        }
        
        if(carry){
            curr->next = new ListNode(carry);
        }
        head = head->next;
        return head;
    }
};