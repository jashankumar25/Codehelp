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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr)
            return nullptr;

        ListNode* temp = head;
        int cnt = 0;

        while (temp != nullptr && cnt < k) {
            temp = temp->next;
            cnt++;
        }

        if (cnt < k) {
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* forward;
        
        int count = 0;

        while (curr != nullptr && count < k) {
            forward = curr->next;
            curr->next = prev;

            prev = curr;
            curr = forward;
            count++;
        }

        head->next = reverseKGroup(curr, k);
        return prev;
    }
};