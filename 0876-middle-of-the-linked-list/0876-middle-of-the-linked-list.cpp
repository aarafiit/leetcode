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
        
        int size = 0;
        ListNode* tmp = head;

        // Count the number of nodes in the linked list
        while(tmp != NULL){
            size++;
            tmp = tmp->next;
        }

        // Reset tmp pointer to head
        tmp = head;

        // Move tmp pointer to the middle node
        int middle = size / 2;
        for(int i = 0; i < middle; i++){
            tmp = tmp->next;
        }

        // Return the middle node
        return tmp;
        
        
    }
};