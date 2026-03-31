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
class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* dummy = new ListNode();
        ListNode* cur = dummy;

        ListNode* l1_ptr = l1;
        ListNode* l2_ptr = l2;

        int carry = 0;
        
        while (l1_ptr != nullptr || l2_ptr != nullptr || carry != 0)
        {
            int sum = carry;

            if (l1_ptr != nullptr)
            {
                sum += l1_ptr->val;
                l1_ptr = l1_ptr->next;
            }

            if (l2_ptr != nullptr)
            {
                sum += l2_ptr->val;
                l2_ptr = l2_ptr->next;
            }

            carry = sum / 10;
            sum %= 10;

            cur->next = new ListNode(sum);
            cur = cur->next;
        }

        return dummy->next;
    }
};