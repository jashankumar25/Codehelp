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
    bool hasCycle(ListNode* head) {

        if (head == NULL)
            return false;

        unordered_map<ListNode*, int> visited;

        ListNode* temp = head;

        while (temp != NULL) { // cycle is prsendt
            if (visited[temp] == 1) {
                return 1;
            }
            visited[temp] = 1;
            temp = temp->next;
        }
        return  false;
    }
};
/*
    bool hasCycle(ListNode* head) {
        if(head==nullptr)
        return  false;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }
        return false;
    }
*/