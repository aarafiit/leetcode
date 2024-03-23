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
    void reorderList(ListNode* head) {
        vector<int> v;
    ListNode *newHead = head;
    while(newHead){
        v.push_back(newHead->val);
        newHead = newHead->next;
    }
    vector<int> nv;
    int i = 0, j = v.size() - 1;
    while (i <= j) {
        nv.push_back(v[i]);
        if (i != j) // Avoid adding duplicates if the list has an odd number of elements
            nv.push_back(v[j]);
        i++;
        j--;
    }

    // Now, update the values of the nodes in the original list
    ListNode* current = head;
    for (int k = 0; k < nv.size(); ++k) {
        current->val = nv[k];
        current = current->next;
    }
        
        
    }
};