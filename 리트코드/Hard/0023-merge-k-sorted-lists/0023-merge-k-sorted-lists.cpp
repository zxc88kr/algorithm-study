#include <vector>
#include <algorithm>

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
    ListNode* mergeKLists(std::vector<ListNode*>& lists)
    {
        std::vector<int> nums;

        for (ListNode* list : lists)
        {
            if (list == nullptr) continue;
            
            ListNode* cur = list;
            while (true)
            {
                nums.push_back(cur->val);
                if (cur->next == nullptr) break;
                else cur = cur->next;
            }
        }

        std::sort(nums.begin(), nums.end());

        if (nums.empty()) return nullptr;

        ListNode* head = new ListNode(nums[0]);
        ListNode* cur = head;

        for (int i = 1; i < nums.size(); i++)
        {
            cur->next = new ListNode(nums[i]);
            cur = cur->next;
        }

        return head;
    }
};