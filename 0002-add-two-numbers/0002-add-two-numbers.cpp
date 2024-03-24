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
//         vector<int> v1;
//         while (l1) {
//             v1.push_back(l1->val);
//             l1 = l1->next;
//         }
//         vector<int> v2;
//         while (l2) {
//             v2.push_back(l2->val);
//             l2 = l2->next;
//         }

//         int sum1 = 0;
//         for (int i = v1.size() - 1; i >= 0; --i)
//             sum1 = sum1 * 10 + v1[i];

//         int sum2 = 0;
//         for (int i = v2.size() - 1; i >= 0; --i)
//             sum2 = sum2 * 10 + v2[i];

//         int finalSum = sum1 + sum2;
//         ListNode *dummy = new ListNode(-1);
//         ListNode *current = dummy;

//         if (finalSum == 0)
//             return new ListNode(0);

//         while (finalSum > 0) {
//             int digit = finalSum % 10;
//             current->next = new ListNode(digit);
//             current = current->next;
//             finalSum /= 10;
//         }

//         return dummy->next;
//     }
        
        ListNode* dummy = new ListNode();
        ListNode* current = dummy;
        int carry = 0;
        
        while (l1 || l2 || carry) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        
        return dummy->next;
    }
};