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
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) // point of intersections
            {
                break;
            }
        }
        if (!fast || !fast->next) {
            return nullptr;
        }
         slow = head;

        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};
/*ListNode* detectCycle(ListNode* head) {

        if (head == NULL) {
            return NULL;
        }
        unordered_map<ListNode*, int> visited;
        ListNode* temp = head;

        while (temp != NULL) {
            if (visited.count(temp)) {
                return temp;
            }
            visited[temp] = 1;
            temp = temp->next;
        }
        return NULL;
    }*/