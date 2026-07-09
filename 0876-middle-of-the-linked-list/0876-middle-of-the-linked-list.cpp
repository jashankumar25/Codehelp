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
    ListNode* middleNode(ListNode* head)
    {
        vector<ListNode*> arr;

        while(head != nullptr)
        {
            arr.push_back(head);
            head = head->next;
        }

        return arr[arr.size() / 2];
    }
};

/*-------------------------------
ListNode* middleNode(ListNode* head) {
        if (head == nullptr)
            return nullptr;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
----------------------------------------
int countnode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int mid = countnode(head) / 2;

        ListNode* temp = head;

        int cnt = 0;

        while (cnt < mid) {
            temp = temp->next;
            cnt++;
        }

        return temp;
    }
---------------------------------------------
*/